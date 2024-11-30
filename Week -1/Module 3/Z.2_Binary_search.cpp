#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i=0; i<n; i++)  //TC = O(n)
    {
        cin >> a[i];
    }
    sort(a, a+n); //TC = O(nlogn)
    while(q--) //TC = O(nlogn)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0;
        int r = n-1;
   
    //binary search
    while(l <= r) //TC = O(logn)
    {
        int mid_index = (l+r)/2;
        if(a[mid_index] == x)
        {
            flag = true;
            break;
        }
        else if(x > a[mid_index])
        {
            //right a jabe
            l = mid_index + 1;
        }
        else
        {
            //left a jabe
            r = mid_index - 1;
        }
    }
    if(flag == 1) cout << "found" << endl;
    else cout << "not found" << endl;
    }
    return 0;
}
