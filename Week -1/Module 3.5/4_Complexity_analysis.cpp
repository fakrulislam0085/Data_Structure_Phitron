/*Time Complexity:  */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k =1;
    while(k<=n){
        cout << k << endl;
        k = k*2;
    }
    return 0;
}



/*Time Complexity:  */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0; i<n; i++)
        for(int j=i; j>0; j--)
        
            cout <<i << j;
    return 0;
}



/*Time Complexity:  */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0; i<n; i++)
        for(int j=i; j>0; j--)
            for(int k=j; k>0; k--)
                cout << i << j << k;
    return 0;
}



/*Time Complexity:  */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=n/2; i<=n; i++){
        for(int j=1; j<=n; j*2){
            cout << i << j << endl;
        }
    }
    return 0;
}



/*Time Complexity:  */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=n/2; j<=n; i++){
        for(int j=1; j<=n; j=j+1){
            cout << i << j << endl;   
        }
    }
    return 0;
}