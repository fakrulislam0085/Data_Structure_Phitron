#include <bits/stdc++.h>
using namespace std;
int main()
{
    set <int> s;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        s.insert(x);  //O(logN)
    }

    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout << *it << endl;
    }

    if(s.count(10))
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;

    cout << s.count(12) << endl;  //O(logN)
    return 0;
}


//duplicate value remove = set
//automatic sort = set
//O(logN) search = set