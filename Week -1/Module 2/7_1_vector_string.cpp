#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();   /*After taking n input, there is a enter
    for avoiding this enter we have to take a ignore() function */
    vector <string> v(n);
    for(int i=0; i<n; i++)
    {
        getline(cin, v[i]);
    }

    for(string name: v)
    {
        cout << name << endl;
    }
    return 0;
}