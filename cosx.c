#include <stdio.h>

int
main ()
{
 // cos x
 int x = 2;
 int N = 3;
 float powResult = 1.0;
 float factResult = 1.0;
 int sign = 1;
 float result = 0.0;

 for(int p = 0 ; p<N ; p += 2){ // 2 4 6 8 ... N
    powResult = 1;
    factResult = 1;
    for(int f=1 ; f<=p ; ++f){ // for example p = 4
        powResult = powResult * x; // x * x * x * x 
        factResult = factResult * f; // 1 * 2 * 3 * 4 
    }
    printf("pow result: %f\n",powResult);
    printf("fact result: %f\n",factResult);
    
    result += sign * (powResult / factResult); 
    sign = sign * (-1); // + - + - ...
   
 }
 printf("result of cos(%d): %f. N=%d",x, result,N);
}
