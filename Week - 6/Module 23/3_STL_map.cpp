#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <string,int> mp;
    mp.insert({"Churchil",1905});
    mp.insert({"Obama",1908});
    mp.insert({"Biden",1910});
    mp.insert({"Trump",1912});

    mp["Churchil"] = 78;  //O(logN)
    mp["Kabir"] = 13;

    // for(auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // cout << mp["Trump"] << endl;
    // cout << mp["Musk"] << endl;

    if(mp.count("Arif"))
    {
        cout << "Found" << endl;
    }
    else
        cout << "Not Found" << endl;



    return 0;
}