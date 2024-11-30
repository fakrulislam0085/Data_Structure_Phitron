#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)  //TC = O(n)
    {
        cin >> ar[i];
    }       
    int x;
    cin >> x;
    bool flag = false;
    for(int i=0; i<n; i++)  //TC = O(n)
    {
        if(ar[i] == ar[i+1]) /*As the array is sorted
        so duplicate value will always be the next value 
        of an original value: such as 2,2 or 7,7*/
        {
            flag = true;
        }
    }

    if(flag== true) cout << "true" << endl;
    else cout <<"false" << endl;

    return 0;
}