/*

    @author: Matheus Rebello;
    @date: 07/03/2024;
    @name: MacPRONALTS;

*/

#include <stdio.h>

#define PRODUCT_1 1001
#define PRODUCT_2 1002
#define PRODUCT_3 1003
#define PRODUCT_4 1004
#define PRODUCT_5 1005

#define VALUE_OF_PRODUCT_1 1.50
#define VALUE_OF_PRODUCT_2 2.50
#define VALUE_OF_PRODUCT_3 3.50
#define VALUE_OF_PRODUCT_4 4.50
#define VALUE_OF_PRODUCT_5 5.50


int main(int argc, char const *argv[])
{
    int p;
    float total_price = 0;

    scanf("%d", &p);

    do
    {   
        int product, quantity;

        scanf("%d %d", &product, &quantity);

        switch (product)
        {
        case PRODUCT_1:
            total_price += VALUE_OF_PRODUCT_1 * quantity;
            break;
        case PRODUCT_2:
            total_price += VALUE_OF_PRODUCT_2 * quantity;
            break;
        case PRODUCT_3:
            total_price += VALUE_OF_PRODUCT_3 * quantity;
            break;
        case PRODUCT_4:
            total_price += VALUE_OF_PRODUCT_4 * quantity;
            break;
        case PRODUCT_5:
            total_price += VALUE_OF_PRODUCT_5 * quantity;
            break;
        default:
            break;
        }
    } while (--p);

    printf("%.2f\n", total_price);
    
    
    return 0;
}
