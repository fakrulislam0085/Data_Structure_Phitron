/*solve using function and vector*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> nums(n);
    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }
    
    int running_sum[n];
    running_sum[0] = nums[0]; 
    for(int i=1; i<n; i++)
    {
        running_sum[i] = nums[i] + running_sum[i-1];
    }

    for(int i=0; i<n; i++)
    {
        cout << running_sum[i] << " ";
       
    }
    return 0;
}