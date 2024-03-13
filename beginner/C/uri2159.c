/*
    @author: Matheus Rebello;
    @date: 13/03/2024;
    @name: Approximate Number of Primes;

*/

#include <stdio.h>
#include <math.h>

#define ln(x) log(x)

int main(int argc, char const *argv[])
{  
    long num;

    scanf("%ld", &num);

   double p = num / ln(num);
   double m = 1.25506 * (num / ln(num));

   printf("%.1lf %.1lf\n", p, m);
     
    return 0;
}
