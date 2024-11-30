#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int value: v)
    {
        if(value == 0)
        {
            cout << "0";
            if(value != v.back())
            {
                cout << " ";
            }
        }
        else if(value > 0)
        {
            cout << "1" ;
             if(value != v.back())
            {
                cout << " ";
            }
        }
        else
        {
            cout << "2";
             if(value != v.back())
            {
                cout << " ";
            }
        }
    }
    return 0;
}