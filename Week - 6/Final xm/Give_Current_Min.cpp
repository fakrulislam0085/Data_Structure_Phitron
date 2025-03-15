#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
   
    priority_queue <int, vector<int>, greater<int>> minheap;
    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        minheap.push(val);
    }
    
    int q;
    cin >> q;
    while(q--)
    {
        int a;
        cin >> a;

        if(a == 0)
        {
            int x;
            cin >> x;
            
            minheap.push(x);
            if(!minheap.empty())
                cout << minheap.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if(a==1)
        {
            if(!minheap.empty())
                cout << minheap.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if(a==2)
        {
            if(!minheap.empty())
            {
                minheap.pop();
                //after erasing value from priority_queue
                if(!minheap.empty())
                    cout << minheap.top() << endl;
                else    
                    cout << "Empty" << endl;
            }
           else
                cout << "Empty" << endl;
        }  
    }
    return 0;
}