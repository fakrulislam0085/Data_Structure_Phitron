#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;  //1 step
    cin >> n; //1 step
    int a[n]; //1 step
    for(int i=0; i<n; i++) //n step
    {
        cin >> a[i]; 
    }
    int sum = 0; //1 step
    for(int i=0; i<n; i++) //n step
    {
        sum = sum + a[i];
    }
    cout << sum << endl; //1 step
    return 0;


    //Complexity = O(N)
}