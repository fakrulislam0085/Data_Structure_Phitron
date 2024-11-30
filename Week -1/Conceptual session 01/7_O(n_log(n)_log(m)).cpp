/*This type of algorithm can be solved using O(n*log(n)*log(m)) number operations*/
/*For solving this type of algorithm, we generally need three for loops- one 
with log(n) steps, another with log(m) steps and third one with O(n) steps. */

for(int i=0; i<n; i+= 2)   //O(n)
{
    for(int j=1+1000; j<n; j=j*5)  //O(log(n))
    {
       for(int k=0; k<m; k=k*2) //O(log(m))
       {
            //statement
       }
    }
}

//In this loop,
    inner k loop time complexity is = O(log(m))
    inner j loop time complexity is = O(log(n))
    outer i loop time complexity is = O(n)
    ----------------------------------------
    So, final time complexity = O(log(m) * log(n) * O(n)) == O(n*log(n)*log(m))