#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    int n;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    queue <int> qq;
    int m;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        qq.push(x);
    }

    if(n != m) cout << "NO" << endl;
    else if(n == m) 
    {
        int flag = 0;
        while(!st.empty() && !qq.empty())
        {
            if(st.top() != qq.front())
            {
                flag = 1;
                break;
            }
            st.pop();
            qq.pop();
        }

        if(flag == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }


    // while(!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // cout << endl;

    // while(!qq.empty())
    // {
    //     cout << qq.front() << " ";
    //     qq.pop();
    // }

    return 0;
}