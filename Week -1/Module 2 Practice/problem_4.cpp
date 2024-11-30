#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1,2,3,4,5,6,7,8,9,10};

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;


    v.resize(20,0);
    for(int num: v)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;


    v.clear();
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    if(v.empty()!= 0) cout << "EMPTY" << endl;
    else cout << "NOT EMPTY" << endl;


    v.resize(10, 100);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    for(int num: v)
    {
        cout << num << " ";
    }

    return 0;
}