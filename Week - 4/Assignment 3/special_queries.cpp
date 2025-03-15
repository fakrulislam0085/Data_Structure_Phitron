#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    queue <string> myQ;
    while(q--)
    {
        int a;
        cin >> a;

        if(a==0) 
        {
            string name;
            cin >> name;

            myQ.push(name);
        }
        else if(a==1)
        {
            if(myQ.empty()) cout << "Invalid" << endl;
            else
            {
                cout << myQ.front() << endl;
                myQ.pop();
            }
            
        }
    }
    return 0;
}