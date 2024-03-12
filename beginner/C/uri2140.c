/*
    @author: Matheus Rebello;
    @date: 12/03/2024;
    @name: Two Bills;

*/

#include <stdio.h>

unsigned short bills[] = {2, 5, 10, 20, 50, 100};

int change(unsigned short buy, unsigned short pay);

int main(int argc, char const *argv[])
{
    
    unsigned short buy_price, paid_price;

    scanf("%hu %hu", &buy_price, &paid_price);

    while (buy_price != 0 && paid_price != 0) 
    {
        if(change(buy_price, paid_price))
            printf("possible\n");
        else
            printf("impossible\n");

        scanf("%hu %hu", &buy_price, &paid_price);  
    }
     
    return 0;
}


int change(unsigned short buy, unsigned short pay) {

    short change = pay - buy;

    for (unsigned short i = 0; i < 6; i++)
        for (unsigned short j = 0; j < 6; j++)
            if (bills[i] + bills[j] == change) return 1;   

    return 0;
}