#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
        }

        bool flag = true;
        for(int i=0; i<n-1; i++)
        {
            if(ar[i] > ar[i+1])
            {
                flag = false;
                break;
            }
        }
        if(flag==false) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
    return 0;
}