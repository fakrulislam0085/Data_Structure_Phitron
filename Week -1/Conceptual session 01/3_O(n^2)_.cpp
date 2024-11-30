/*This type of algorithm can be solved using (n*n) times number operations*/
/*For solving this type of algorithm, we generally need an inner for loop with n steps
inside of an outer for loop with n steps*/

for(int i=0; i<n; i++)  //O(n)
{
    for(int j=0; j<n; j++)
    {
        //statement;
    }
}

//In this type loop, our input and operation relation changes in this way:
when,
    i = 0   ;   j=0;  operation = 1
            ;   j=1;  operation = 2
            ;   j=2;  operation = 3
            ;   j=n;  operation = n+1

    i = 1   ;   j=0;  operation = 1
            ;   j=1;  operation = 2
            ;   j=2;  operation = 3
            ;   j=n;  operation = n+1

    i = 2   ;   j=0;  operation = 1
            ;   j=1;  operation = 2
            ;   j=2;  operation = 3
            ;   j=n;  operation = n+1

    i = n   ;   j=0;  operation = 1
            ;   j=1;  operation = 2
            ;   j=2;  operation = 3
            ;   j=n;  operation = n+1
    ---------------------------------
    So, in total, complexity = O(n) * O(n)

    /*Here for every i = 0,1,2,3,....,n value, j is operating n times*/
    For example,
        if i=0 ; j is operating 0 to n times.
        if i=1 ; j is operating 0 to n times.
        if i=2 ; j is operating 0 to n times.
    So, if i=n ; j is operating 0 to n times.

    That means, 
        the complexity of inner loop is O(n+1) = O(n)
        the complexity of outer loop is O(n+1) = O(n)
        So, Total Time complexity = O(n) * O(n) = O(n*n)



//Some example with n*n time complexity:

for(int i=n/2; i<n; i++)
{
    for(int j=1; j<n; j++)
    {
        //statement
    }
}