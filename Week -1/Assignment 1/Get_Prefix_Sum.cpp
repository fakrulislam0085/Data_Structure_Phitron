#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    long long int pref_array[n];
    pref_array[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        pref_array[i] = arr[i] + pref_array[i-1];
    }

    for(int i=n-1; i>=0; i--)
    {
        cout << pref_array[i] << " ";
    }
    return 0;
}