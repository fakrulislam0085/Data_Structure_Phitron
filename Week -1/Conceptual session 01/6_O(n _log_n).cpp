/*This type of algorithm can be solved using (n*log(n)) number operations*/
/*For solving this type of algorithm, we generally need two for loops- one 
with log(n) steps and another with O(n) steps. */

for(int i=n/2; i<n; i++)   //O(n)
{
    for(int j=1; j<n; j=j*3)  //O(log(n))
    {
        //statement
    }
}

//In this loop,
    inner loop time complexity is = O(log(n))
    outer loop time complexity is = O(n)
    ----------------------------------------
    So, final time complexity = O(log(n)) * O(n) == O(n log(n))