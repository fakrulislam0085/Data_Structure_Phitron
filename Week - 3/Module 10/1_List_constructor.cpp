#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list <int> mylist;
    // cout << mylist.size() << endl;

    list <int> mylist(10,555);
    cout << mylist.size() << endl;
    cout << mylist.front() << endl;
    cout << mylist.back() << endl;
    for(auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << endl;


    list <int> list1 = {10,20,30};
    list <int> list2(list1);
    for(auto it = list2.begin(); it != list2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << endl;


    int ar[5] = {1,2,3,4,5};
    list <int> listar(ar, ar+5);
    for(auto it = listar.begin(); it != listar.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << endl;
   
    
    vector <int> v = {101,201,301,401,501};
    list <int> listvector(v.begin(), v.end());
    for(auto it = listvector.begin(); it != listvector.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << endl;


    //range based for loop
    for(int val: listvector)
    {
        cout << val << " ";
    }

    return 0;
}