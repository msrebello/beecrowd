#include<stdio.h>

float totalPriceCalculator(int units1, int units2, float price1, float price2);
void showTotalPrice(float value);
int main(int argc, char const *argv[]) {
    //product 1
    int codeOne, unitsOfOne;
    float unitPriceOfOne;
     //product 2
    int codeTwo, unitsOfTwo;
    float unitPriceOfTwo;

    scanf("%d %d %f", &codeOne, &unitsOfOne, &unitPriceOfOne);
    scanf("%d %d %f", &codeTwo, &unitsOfTwo, &unitPriceOfTwo);

    showTotalPrice(totalPriceCalculator(unitsOfOne, unitsOfTwo, unitPriceOfOne, unitPriceOfTwo));

    return 0;
}

float totalPriceCalculator(int units1, int units2, float price1, float price2) {
    return units1 * price1 + units2 * price2;
}

void showTotalPrice(float value) {
    printf("VALOR A PAGAR: R$ %.2f\n", value);
}