#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {5,10,15,20,25};
    vector <int> v2 = {50,55,61};
    // v.insert(v.begin()+2, 10)   // value insert
    v.insert(v.begin()+3, v2.begin(), v2.end()); //Vector insert
    for(int a:v)
    {
        cout << a <<  " ";
    }
    return 0;
}