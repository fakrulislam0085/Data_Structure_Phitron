#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    stack <int> st;
    queue <int> q;

    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }

    for(int i=0; i<m; i++)
    {
        int b;
        cin >> b;
        q.push(b);
    }

    if(n!=m) cout << "NO" << endl;
    else if(n==m)
    {
        bool flag = true;
        while(!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if(flag == false) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}