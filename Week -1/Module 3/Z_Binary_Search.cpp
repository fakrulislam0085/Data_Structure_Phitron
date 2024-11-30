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
    
    for(int i=0; i<q; i++)  //TC = O(q) * O(n)
    {
        int x;
        cin >> x;

        int flag = 0;
        for(int i=0; i<n; i++)  //TC = O(n)
        {
           
            if( x == v[i])
            {
                // cout << "found" << endl;
                flag = 1;
                break;
            }
            else if(x != v[i])
            {
                flag = 0;
                continue;
            }
        }

        if(flag == 1) cout << "found" << endl;
        else cout << "not found" << endl;
    }


    return 0;
}
