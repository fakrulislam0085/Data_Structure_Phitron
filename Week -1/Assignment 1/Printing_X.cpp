#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {

        //matrix index
            //cout << i << j << " ";

        //printing middle
        if(i==j && i+j == n+1)
        {
            cout << "X";
        }
        //primary diagonal
          else if(i==j)
            {
                cout << "\\";
            }

        //Secondary diagonal
           else if(i+j == n+1)
            {
                if(i!= j)
                {
                    cout << "/";
                }   
            }

            else 
            {
                cout << " ";
            } 
        }
        cout << endl;
    }
    
    return 0;
}