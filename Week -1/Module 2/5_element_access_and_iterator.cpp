#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> v = {10,20,30,40,50,60,70,80,90};
    // cout << v[v.size()-1] << endl;
    // cout << v.back() << endl; //easy to use
    // cout << v.front() << endl;
    // cout << v[0] << endl; //easy to use



    vector <int> v = {10,20,30,40,50,60,70,80,90};
    //vector <int> :: iterator it;
    for(auto it = v.begin(); it<v.end(); it++)
    {
        cout <<*it << " ";
    }
    return 0;
}