#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> mylist;

    while(1)
    {
        int val;
        cin >> val;

        if(val == -1) break;
        else
        {
            mylist.push_back(val);
        }
    }
    mylist.sort();
    

    for(auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}