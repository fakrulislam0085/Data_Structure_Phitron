#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int ar[n];
    for(int i=0; i<n; i++)  //TC = O(n);
    {
        cin >> ar[i];
    }

    long long int pre[n];
    pre[0] = ar[0];
    for(int i=1; i<n; i++)  //TC = O(n);
    {
        pre[i] = ar[i] + pre[i-1];
    }

    // for(int i=0; i<n; i++)
    // {
    //     cout << pre[i] << " ";
    // }

    while(q--)  //TC = O(q);
    {
        long long int l, r;
        cin >> l >> r;
        l--;
        r--;

        long long int sum = 0;
        if(l==0) sum = pre[r];
        else sum = pre[r] - pre[l-1];
        
        cout << sum << endl;
    }
    
    //Time complexity = O(n+q) = O(n) or O(q) as, n or q = 10^5
    return 0;
}