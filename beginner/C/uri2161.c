/*
    @author: Matheus Rebello;
    @date: 14/03/2024;
    @name: Square Root of 10;

*/

#include <stdio.h>

#define FIXED_VALUE 3.f

int main(int argc, char const *argv[])
{  
    unsigned short reps ;
    double approximated_number = 0;
    
    scanf("%hu", &reps);

    if (!reps)
        approximated_number = FIXED_VALUE;
    else {
        double temp_result = 6;

        while (reps-- > 1)
            temp_result = 6.f + 1.f / temp_result;

        approximated_number = FIXED_VALUE + 1.f / temp_result;
    }
    printf("%.10lf\n", approximated_number);

    return 0;
}
