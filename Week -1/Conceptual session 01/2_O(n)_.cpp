/*This type of algorithm can be solved using n number operations*/
/*For solving this type of algorithm, we generally need a for loop with n steps*/

for(int i=0; i<n; i++)  //O(n)
{
    //statement;
}

//In this loop, our input and operation relation changes in this way:
when,
    i = 0   ;  operation = 1
    i = 1   ;  operation = 2
    i = 2   ;  operation = 3
    i = 3   ;  operation = 4
    i = 4   ;  operation = 5
    i = n   ;  operation = n+1
    --------------------------
    So, in total, complexity = O(n+1) = O(n)