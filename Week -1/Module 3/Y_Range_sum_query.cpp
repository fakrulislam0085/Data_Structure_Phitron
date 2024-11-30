#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int ar[n];
    for(int i=0; i<n; i++)  //TC = O(n);
    {
        cin >> ar[i];
    }

    while(q--) //TC = O(q) * O(r) = O(q*r);
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        int sum = 0;
        for(int i=l; i<=r; i++) //TC = O(r);
        {
            sum+=  ar[i];
        }
        cout << sum << endl;
    }
     

    return 0;
}