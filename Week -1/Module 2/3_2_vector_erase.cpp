#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {10,20,30,40,50};
    
    //v.erase(v.begin()+3);  //single value delete
    
    //v.erase(v.begin()+1, v.begin()+3); //multiple value delete
    
    v.erase(v.begin()+1, v.end()-1); //multiple value delete
    for(int x:v)
    {
        cout << x << " ";
    }
    return 0;
}