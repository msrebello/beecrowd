#include<stdio.h>

float calculateTotalPayment(int product, int quantity);
void showTotal(float value);
int main(int argc, char const *argv[]) {
    int x, y;
    scanf("%d %d", &x, &y);

    showTotal(calculateTotalPayment(x, y));

    return 0;
}

float calculateTotalPayment(int product, int quantity) {

    float value = 0;

    switch (product)
    {
    case 1:
        value = 4.0 * quantity;
        break;
    case 2:
        value = 4.50 * quantity;
        break;
    case 3:
        value = 5.0 * quantity;
        break;
    case 4:
        value = 2.0 * quantity;
        break;
    case 5:
        value = 1.5 * quantity;
        break;                
    default:
        break;
    }

    return value;
}

void showTotal(float value) {
    printf("Total: R$ %.2f\n", value);
}