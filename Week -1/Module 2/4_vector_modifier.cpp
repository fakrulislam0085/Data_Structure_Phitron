#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*Replace*/
    // vector <int> v = {1,2,2,2,2,5,4,8,6,2,7,2};
    // //replace(v.begin(), v.end(), 2, 100);
    // replace(v.begin(), v.end()-1, 2, 100);
    // for(int x:v)
    // {
    //     cout << x << " ";
    // }


    /*Found*/
    // vector <int> v = {1,2,2,2,2,5,4,8,6,2,7,2};
    // // vector <int> :: iterator it;
    // // it =find(v.begin(), v.end(), 2); 
    // auto it =find(v.begin(), v.end(), 2); 
    // cout << *it;

    vector <int> v = {1,2,2,2,2,5,4,8,6,2,7,2};
    auto it = find(v.begin(), v.end(), 45);
    if(it == v.end()) cout << "Not Found";

    else cout << "Found";
   
    return 0;
}