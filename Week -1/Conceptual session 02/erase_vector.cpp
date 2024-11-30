#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {10,20,30,40,50};

    //v.erase(v.begin()+2);
    v.erase(v.begin()+1, v.begin()+3);

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }


//single value erase:
        //vecotr.erase(pos)

//multiple value erase:
        //vecotr.erase(start, end)
        
    return 0;
}