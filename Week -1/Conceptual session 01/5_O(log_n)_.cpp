/*This type of algorithm can be solved using log(n) number operations*/
/*For solving this type of algorithm, we generally need a for loop with log(n) steps;
this type of loop increases by times (i = i*2) or decreases by division(i = i/2). */

for(int i=1; i<=n; i= i*2)  
{
    //statement;
}

//In this loop, our input and operation relation changes in this way:
when,
    i = 1  = 2^0 ;  operation = 1
    i = 2  = 2^1 ;  operation = 2
    i = 4  = 2^2 ;  operation = 3
    i = 8  = 2^3 ;  operation = 4
    i = 16 = 2^4 ;  operation = 5
    i = 32 = 2^5 ;  operation = 6
    i = n  = 2^k ;  operation = ?   //suppose, k is natural number increasing by 1
    --------------------------
   Notice, when k = 0, 1, 2; step = 1, 2, 3.
   So, if k = k; step = k+1.   //k = 20 hole step hobe (20+1)

   now, we can write,
        n = 2^k
    => log(n) = log(2^k)
    => log2(n) = log2(2^k)
    => log2(n) = 1 * k     //as, log x(x) = 1
    => log (n) = k         // log2(n) theke 2 ignore kore
    => k = log(n)

    As, step = k+1 
    =>  step = log(n) + 1


    ---------------------------
    That means, time complexity = log(n) 