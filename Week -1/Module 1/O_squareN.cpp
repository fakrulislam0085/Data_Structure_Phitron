#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for(int i=0; i<n; i++)  //time complexity = N*N
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cout << "Hello" << endl;
    //     }
    // }


    for(int i=0; i<=n-1; i++)    //time complexity = N*N
    {
        cout << i <<endl;
        
        for(int j=i+1; j<n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}