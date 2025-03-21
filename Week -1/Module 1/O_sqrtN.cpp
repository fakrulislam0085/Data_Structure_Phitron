#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // for(int i=1; i<=sqrt(n); i++) //time complexity = O(sqrt(N))
    // {
    //     if(n%i == 0)
    //     {
    //         cout << i << " ";
    //         if(i != n/i) cout << n/i << endl;
    //     }
    // }

    for(int i=1; i*i<=n; i++) //time complexity = O(sqrt(N))
    {
        if(n%i == 0)
        {
            cout << i << " ";
            if(i != n/i) cout << n/i << endl;
        }
    }
    return 0;
}