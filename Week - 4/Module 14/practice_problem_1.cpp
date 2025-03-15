#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list <int> myQ;
    void push(int val)
    {
        myQ.push_back(val);
    }
    int front()
    {
        return myQ.front();
    }
    void pop()
    {
        myQ.pop_front();
    }
    int size()
    {
        return myQ.size();
    }
    bool empty()
    {
        if(size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q1;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }

    myQueue q2;
    int m;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int y;
        cin >> y;
        q2.push(y);
    }


    while(!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }

    while(!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}