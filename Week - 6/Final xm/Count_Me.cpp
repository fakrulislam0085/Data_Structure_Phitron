#include <bits/stdc++.h>
using namespace std;
class cmp{
    public:
        bool operator()(pair<string,int>&a, pair<string,int>&b)
        {
            if(a.second < b.second)
                return true;
            else if(a.second == b.second)
            {
                return a.first < b.first;
            }
            else
                return false;
        }
};
int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map <string, int> freq;
        while(ss >> word)
        {
            freq[word] = freq[word]+1;
        }
        
    
    priority_queue< pair<string,int>, vector<pair<string,int>>, cmp> pq;
   
    for(auto it : freq)
    {
        pq.push({it.first, it.second});
    }
    
  
   
    while(!pq.empty())
    {
       cout << pq.top().first << " " << pq.top().second << endl;
       pq.pop();
    }
    cout << endl;
    }

    return 0;
}