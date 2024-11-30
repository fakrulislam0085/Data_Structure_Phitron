#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> v = {10,20,30,40,50};
    // vector <int> x = {15,25,35};
    // v = x;   //TC = O(N)
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }


    vector <int> v = {10,20,30,40,50,60,70,80};
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}