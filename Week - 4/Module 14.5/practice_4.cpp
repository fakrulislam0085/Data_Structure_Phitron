#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> myQ;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        myQ.push(x);
    }

    stack <int> st;
    while(!myQ.empty())
    {
        int element = myQ.front();
        st.push(element);
        myQ.pop();
    }

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}