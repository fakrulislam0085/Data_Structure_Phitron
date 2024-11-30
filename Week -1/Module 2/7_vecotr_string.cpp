#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
/*1st way input*/
    vector <string> v;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }


/*1st way output*/
    // for(string name: v)
    // {
    //     cout << name << endl;
    // }

/*2nd way output*/
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}