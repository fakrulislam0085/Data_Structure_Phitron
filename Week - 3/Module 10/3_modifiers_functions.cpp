#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list <int> mylist = {10,20,30};
    // list <int> newlist;
    // //assign way 1: newlist = mylist;
    // //assign way 2:
    // newlist.assign(mylist.begin(),mylist.end());
    // for(int val: newlist)
    // {
    //     cout << val << " ";
    // }



    list <int> mylist = {10,20,30,40,50};
    // list <int> newlist = {100,200,300};
    // vector <int> v = {5,15,25};
    // mylist.push_front(100);  //insert at head
    // mylist.push_back(500); //insert at tail
    // mylist.pop_back();   //delete tail node
    // mylist.pop_front();  //delete head node

    //mylist.insert(next(mylist.begin(), 3), 100);
    //mylist.erase(next(mylist.begin(), 2));
    //mylist.insert(next(mylist.begin(), 3), {100,200,300});
    //mylist.insert(next(mylist.begin(), 3), newlist.begin(), newlist.end());
    //mylist.insert(next(mylist.begin(), 3), v.begin(), v.end());
    //mylist.erase(next(mylist.begin(), 2), next(mylist.begin(),4));
    // replace(mylist.begin(), mylist.end(), 10,500);

    // for(int val: mylist)
    // {
    //     cout << val << " ";
    // }


    auto it = find(mylist.begin(), mylist.end(), 40);
    cout << *it << endl;
    if(it == mylist.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}