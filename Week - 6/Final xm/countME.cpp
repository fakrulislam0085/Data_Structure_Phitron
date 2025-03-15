#include <bits/stdc++.h>
using namespace std;
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

        map <string, int> freq;   //To store word and their frequency
        string max_word;
        int max_count = 0;

        while(ss >> word)
        {
            freq[word]++;

            if(freq[word] > max_count)
            {
                max_word = word;
                max_count = freq[word];
            }
        }
        cout << max_word << " " << max_count << endl;

    }

    return 0;
}