/*
    @author: Matheus Rebello;
    @date: 12/03/2024;
    @name: The Return of Radar;

*/

#include <stdio.h>

int how_many_orders(unsigned short num);

int main(int argc, char const *argv[])
{
    
    unsigned short T, number_of_people;

    scanf("%hu", &T);

    while (T != 0) 
    {   
        for (unsigned short i = 0; i < T; i++)
        {
            scanf("%hu", &number_of_people);

            unsigned short orders = how_many_orders(number_of_people);
            
            printf("%hu\n", orders);
        }

        scanf("%hu", &T);       
    }
     
    return 0;
}

int how_many_orders(unsigned short num) {
    if(num % 2 == 0) return (num - 2) * 2 + 2;
    else return (num - 1) * 2 + 1; 
}