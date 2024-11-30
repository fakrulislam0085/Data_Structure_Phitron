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
    int search;
    cin >> search;

    int l = 0;
    int r = n-1;
    bool flag = false;

/*Binary Search*/
    while(l <= r)   //TC = O(log n)
    {
        int mid = (l+r)/2;

        if(ar[mid] == search)
        {
            if(ar[mid] == ar[mid+1])
            {
                flag = true;
                break;
            }
        }
        else if(ar[mid] < search)
        {
            l = mid+1;  //left a search value
        }
        else
        {
            r = mid-1;  //right a search value
        }
    }

    if(flag == true) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}