#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> ar(n);
    for(int i=0; i<n; i++)   //TC = O(n)
    {
        cin >> ar[i];
    }

    int left_sum_array[n];
    left_sum_array[0] = 0;
    for(int i=1; i<n; i++) //TC = O(n)
    {
        left_sum_array[i] = ar[i-1] + left_sum_array[i-1];
    }

    for(int element: left_sum_array)  //TC = O(n)
    {
        cout << element << " ";
    }
    return 0;
}