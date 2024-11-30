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
    int old_value, new_value;
    cin >> old_value >> new_value;
    int find_value;
    cin >> find_value;

    replace(v.begin(), v.end(), old_value, new_value);
    for(int num: v)
    {
        cout << num << " ";
    }
    cout << endl;

    auto it = find(v.begin(), v.end(), find_value);
    
    int flag = 0;
    int index_val;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] == *it) 
        {
            index_val = i;
            flag = 1;
            break;
        }
        else
        {
            continue;
        }
    }

    if(flag == 1) cout << index_val << endl;
    else cout << "-1";
    return 0;
}