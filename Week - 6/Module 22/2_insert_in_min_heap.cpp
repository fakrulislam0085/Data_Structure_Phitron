#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> v = {50,40,45,30,35,42,32,25,20,10};
    vector <int> v;

    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_indx = v.size() - 1;
        //cout << cur_indx << endl;
    
        while( cur_indx != 0)
        {
            int parent_indx = (cur_indx - 1) / 2;
            if(v[parent_indx] > v[cur_indx])
            {
                swap(v[parent_indx], v[cur_indx]);
            }
            else
                break;

            cur_indx = parent_indx;
        }
    }
   
    for(int val:v)  
        cout << val << " ";

    return 0;
}