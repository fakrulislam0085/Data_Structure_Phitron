#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int x; 
    cin >> x;

    int l = 0;
    int r = n-1;
    bool flag = false;
    while(l <= r)
    {
        int mid_index = (l+r)/2;
        if(v[mid_index] == x)
        {
            flag = true;
            break;
        }
        else if(x > v[mid_index])
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
    if(flag == true)
    {
        cout <<"found" << endl;
    }
    else cout << "not found" << endl;
    return 0;
}