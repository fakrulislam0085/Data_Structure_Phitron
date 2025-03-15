#include <bits/stdc++.h>
using namespace std;
class myStack {
public:
    //Implementing STL of vector
    vector <int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }
                        
    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        if(size()==0) 
            return true;
        else
            return false;
    }
};

class myQueue {
public:
    //Implementing STL of list
    list <int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }
                        
    int front()
    {
        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        if(size()==0) 
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    myQueue q;
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }
    for(int i=0; i<m; i++)
    {
        int b;
        cin >> b;
        q.push(b);
    }

    if(n!=m) cout << "NO" << endl;
    else if(n==m)
    {
        bool flag = true;
        while(!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if(flag == false) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}