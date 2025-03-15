#include <bits/stdc++.h>
using namespace std;
class myQueue
{
    public:
        
        list <int> myq;
        void push(int val)
        {
            myq.push_back(val);
        }
        void pop()
        {
            myq.pop_front();
        }
        int front()
        {
            return myq.front();
        }
        int size()
        {
            return myq.size();
        }
        bool empty()
        {
            return myq.empty();
        }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    // if(!q.empty())
    // {
    //     cout << q.front() << endl;
    // }
    return 0;
}