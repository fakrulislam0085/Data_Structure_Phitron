#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    //for(int i=0; i<test; i++)
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
        for(int i=0; i<n; i++)  //there is a mistake in this line
        {
            if(ar[i] > ar[i+1])
            {
                flag = false;
                break;
            }
            else if(ar[i] <= ar[i+1])
            {
                continue;
            }
        }
        if(flag == false) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}