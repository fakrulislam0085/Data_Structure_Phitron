#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector <int> v(n);
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    // cout << n << " " << q << endl;
    // for(int i=1; i<=n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    
    for(int i=1; i<=q; i++)
    {
        int l, r;
        cin >> l >> r;

        long long int sum = 0;
        // cout << l << " " << r << endl;

        for(int i=l; i<=r; i++)
        {
            // cout << v[i] << " ";
            sum = sum + v[i];
        }
        cout << sum << endl;
        
    }

    return 0;
}