#include <bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int> v;    //Type 1
    //vector <int> v(5);//Type 2
    //vector <int> v(5, 10);//Type 3\

/*Type 4*/
    // vector <int> v2(5,100);
    // vector <int> v(v2);

/*Type 5*/
    // int a[6] = {1, 2, 3, 4, 5, 6};
    // vector<int>v(a,a+6);
    // //vector<int>v = {2,10,3,5};

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;
    return 0;
}