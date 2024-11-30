#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        vector <string> v;
        for(int i=0; i<n; i++)
        {
            string word;
            cin >> word;
            v.push_back(word);
        }

        for(int i=0; i<n; i++)
        {
            vector <string> v2; 
            v[i] = v2;
            for(int j=0; j<v2.size(); j++)
            {
                cout << v[j] << " ";
            }
            cout << endl;
        }  

    return 0;
}