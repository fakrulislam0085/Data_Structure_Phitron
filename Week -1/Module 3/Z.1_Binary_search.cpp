#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    while(q--)
    {
        int x;
        cin >> x;

        bool flag = false;
        for(int i=0; i<n; i++)
        {
           
            if( x == v[i])
            {
                // cout << "found" << endl;
                flag = true;
                break;
            }
            else if(x != v[i])
            {
                flag = flag;
                continue;
            }
        }

        if(flag == 1) cout << "found" << endl;
        else cout << "not found" << endl;
    }


    return 0;
}
