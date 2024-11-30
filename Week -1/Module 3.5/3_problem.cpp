#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    int q;
    cin >> q;  
   
    while(q--)  //TC = O(log q)
    {
        int x;
        cin >> x;
        bool flag = false;

        for(int i=0; i<n; i++)  //TC = O(n)
        {
            if(x != ar[i])
            {
                continue;
            }
            else
            {
                flag = true;
                break;
            }
        }

        if(flag == true) cout <<"YES" << endl;
        else cout << "NO" << endl;
    }                             
    

    return 0;
}