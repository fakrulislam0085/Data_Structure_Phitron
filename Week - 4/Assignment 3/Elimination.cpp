#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
       string s;
       cin >> s;
       stack <char> st;
       for(char x:s)
       {
            if(!st.empty())
            {
                if(x == '1' && st.top() == '0')
                {
                    st.pop();
                }
                else
                    st.push(x);
            }
            else if(st.empty())
            {
                st.push(x);
            }
       }
        if(st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}