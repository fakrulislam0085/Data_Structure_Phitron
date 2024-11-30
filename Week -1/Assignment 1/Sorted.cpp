#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int i=0; i<test; i++)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
        }

        int b[n];
        for(int i=0; i<n; i++)
        {
            b[i] = ar[i];
        }

        sort(ar, ar+n);

       
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            if(b[i] == ar[i])
            {
                flag = true;
            }
        }
        if(flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}