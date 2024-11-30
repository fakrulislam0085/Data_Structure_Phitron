#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {10,20,30,40,50};
    //v.insert(v.begin(), 10);
    //v.insert(v.begin()+3,5,35);
    //v.insert(v.end(),3,100);
    //v.insert(v.end()-1, 4, 55);


    vector <int> v2 = {100,200,300};
//multiple value insert
    //v.insert(v.begin(), v2.begin(), v2.end());
    v.insert(v.begin(), v2.begin()+1, v2.end()-1);
    for(int val: v)
    {
        cout << val << " ";
    }


//insert:
    // vector.insert(indx, val)
    // vector.insert(indx, times, val)
    // vector.insert(indx, start, end)
    return 0;
}