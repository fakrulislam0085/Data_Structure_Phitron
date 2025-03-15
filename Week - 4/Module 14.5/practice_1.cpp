#include <bits/stdc++.h>
using namespace std;
class Node
{
public: 
    Node* prev;
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
class myStack
{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if(sz == 0)
            return true;
        else    
            return false;    
    }
};
int main()
{
    myStack st1;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    myStack st2;
    int m;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if(n != m)
    {
        cout << "NO" << endl;
    }
    else if(n == m)
    {
        bool flag = true;
        while(!st1.empty() && !st2.empty())
        {
            if(st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }

        if(flag == false) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}