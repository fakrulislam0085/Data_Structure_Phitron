#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> mylist = {10,20,30,40,50,20,10,20,20};
    //mylist.remove(10);
    //mylist.sort();  //ascending order
    //mylist.sort(greater <int> ());  //descending order
    //mylist.unique();  //sorted duplicate value remove
    mylist.reverse();
    for(int val: mylist)
    {
        cout << val << " ";
    }
    return 0;
}