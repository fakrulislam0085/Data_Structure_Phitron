/*This type of algorithm can be solved using (n*n*n) times number operations*/
/*For solving this type of algorithm, we generally need two inner for loop with n steps
inside of an outer for loop with n steps*/

for(int i=0; i<n; i++)  //O(n)
{
    for(int j=0; j<n; j++)
    {
        for(int k =0; k<n; k++)
        {
            //some constant time operation
        }
    }
}

Here, the time complexity of every loop is O(n), because here every for loop is operating
for n times.

/*Here for every i = 0,1,2,3,....,n value, j and k is operating n times*/
    For example,
        if i=0 ; j is operating 0 to n times ; k is also operating 0 to n times for every j value.
        if i=1 ; j is operating 0 to n times ; k is also operating 0 to n times for every j value.
        if i=2 ; j is operating 0 to n times ; k is also operating 0 to n times for every j value.
    So, if i=n ; j is operating 0 to n times ; k is also operating 0 to n times for j = n.

    That means, 
        the complexity of inner k loop is O(n)
        the complexity of inner j loop is O(n)
        the complexity of outer loop is O(n)
        So, this programm is operating for (N*N*N) times.
        That means, the complexity is O(n*n*n) = O(n^3).