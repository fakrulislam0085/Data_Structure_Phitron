#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> doublylinkedlist;

    int q;
    cin >> q;
    while(q--)
    {
        int x, v;
        cin >> x >> v;

        if(x==0)
        {
            doublylinkedlist.push_front(v);
            cout << "L -> ";
            for(int val : doublylinkedlist)
            {
                cout << val << " ";
            }
            cout << endl;

            doublylinkedlist.reverse();
            cout << "R -> ";
            for(int val : doublylinkedlist)
            {
                cout << val << " ";
            }
            cout << endl;
            doublylinkedlist.reverse();
        }
        else if(x==1)
        {
            doublylinkedlist.push_back(v);
            cout << "L -> ";
            for(int val : doublylinkedlist)
            {
                cout << val << " ";
            }
            cout << endl;

            doublylinkedlist.reverse();
            cout << "R -> ";
            for(int val : doublylinkedlist)
            {
                cout << val << " ";
            }
            cout << endl;

            doublylinkedlist.reverse();
        }
        else if(x==2)
        {
            int n = doublylinkedlist.size();
            if(v >= n)
            {
                cout << "L -> ";
                for(int val : doublylinkedlist)
                {
                    cout << val << " ";
                }
                cout << endl;

                doublylinkedlist.reverse();
                cout << "R -> ";
                for(int val : doublylinkedlist)
                {
                    cout << val << " ";
                }
                cout << endl;

                doublylinkedlist.reverse();
            }
            
            else if(v < n)
            {
                doublylinkedlist.erase(next(doublylinkedlist.begin(), v));
                cout << "L -> ";
                for(int val : doublylinkedlist)
                {
                    cout << val << " ";
                }
                cout << endl;

                doublylinkedlist.reverse();
                cout << "R -> ";
                for(int val : doublylinkedlist)
                {
                    cout << val << " ";
                }
                cout << endl;
                doublylinkedlist.reverse();
            }
        }
    }
    return 0;
}