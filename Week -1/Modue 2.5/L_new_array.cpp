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
    vector <int> v2(n);
    for(int i=0; i<n; i++)
    {
        cin >> v2[i];
    }

    for(int val: v2)
    {
        cout << val << " ";
    }
    for(int valu: v)
    {
        cout << valu << " ";
    }

    return 0;
}