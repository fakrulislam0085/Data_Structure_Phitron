#include <bits/stdc++.h>
using namespace std;
int main()
{

/*first way*/
    // vector <int> v;
    // int n;
    // cin>> n;
    // for(int i=0; i<n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // for(int value: v)
    // {
    //     cout << value << " ";
    // }




/*second way*/
    int n;
    cin >> n;
    vector <int > v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    for (int value : v)
    {
        cout << value << " ";
    }

    return 0;
}