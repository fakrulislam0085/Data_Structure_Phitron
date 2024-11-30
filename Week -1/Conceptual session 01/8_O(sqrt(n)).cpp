/*This type of algorithm can be solved using (sqrt(n)) times number operations*/
/*For solving this type of algorithm, we generally need a for loop with sqrt(n) steps
*/

for(int i=1; i*i<n; i++)  //O(sqrt(n))
{
    //statement;
    
}

when,
    n = 64;
    i = 1   ;   operation = 1;
    i = 2   ;   operation = 2;
    i = 3   ;   operation = 3;
    i = 4   ;   operation = 4;
    i = 5   ;   operation = 5;
    i = 6   ;   operation = 6;
    i =7    ;   operation = 7;
   
Here, 
   operations =>  i*i < n;
              =>  i^2 < n;
              =>  i< sqrt(n);

So, Time complexity is = O(sqrt(n))
