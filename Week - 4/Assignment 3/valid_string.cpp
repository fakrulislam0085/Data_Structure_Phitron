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
        for(char c:s)
        {
            if(!st.empty())
            {
                if(c == '0' && st.top() =='1')
                    st.pop();
                else if(c == '1' && st.top() == '0')
                    st.pop();
                else
                    st.push(c);
            }  
            else if(st.empty())
                st.push(c);
        }
        if(st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}