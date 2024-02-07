#include<stdio.h>
#include<math.h>

float calculateBankNotes(float value, int* n100, int* n50, int* n20, int* n10, int* n5, int* n2);
void calculateBankCoins(float rest, int* c1, int* c050, int* c025, int* c010, int* c005, int* c001);
void showAllBankNotesAndCois(int n100, int n50, int n20, int n10, int n5, int n2, int c1, int c050, int c025, int c010, int c005, int c001);

int main(int argc, char const *argv[]) {

    int note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0;
    int coin1 = 0, coin050 = 0, coin025 = 0, coin010 = 0, coin005 = 0, coin001 = 0;
    float value; //monatary value

    scanf("%f", &value);

    float rest = calculateBankNotes(value, &note100, &note50, &note20, &note10, &note5, &note2);
    calculateBankCoins(rest, &coin1, &coin050, &coin025, &coin010, &coin005, &coin001);
    showAllBankNotesAndCois(note100, note50, note20, note10, note5, note2, coin1, coin050, coin025, coin010, coin005, coin001);

    return 0;
}

float calculateBankNotes (float value, int* n100, int* n50, int* n20, int* n10, int* n5, int* n2) {

    *n100 = value / 100;
    value = fmod(value, 100.0);
     
    *n50 = value / 50;
    value = fmod(value, 50.0);

    *n20 = value / 20;
    value = fmod(value, 20.0); 

    *n10 = value / 10;
    value = fmod(value, 10.0); 

    *n5 = value / 5;
    value = fmod(value, 5.0); 

    *n2 = value / 2;
    value = fmod(value, 2.0);
    
    return value;
}

void calculateBankCoins (float rest, int* c1, int* c050, int* c025, int* c010, int* c005, int* c001) {

    *c1 = floor(rest / 1.0);
    rest = fmod(rest, 1.0); 

    *c050 = floor(rest / 0.5);
    rest = fmod(rest, 0.50);

    *c025 = floor(rest / 0.25);
    rest = fmod(rest, 0.25); 

    *c010 = floor(rest / 0.1);
    rest = fmod(rest, 0.10); 

    *c005 = floor(rest / 0.05);
    rest = fmod(rest, 0.05); 

    *c001 = round(rest / 0.01);
    rest = fmod(rest, 0.01);
}

void showAllBankNotesAndCois(int n100, int n50, int n20, int n10, int n5, int n2, int c1, int c050, int c025, int c010, int c005, int c001) {

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c050);
    printf("%d moeda(s) de R$ 0.25\n", c025);
    printf("%d moeda(s) de R$ 0.10\n", c010);
    printf("%d moeda(s) de R$ 0.05\n", c005);
    printf("%d moeda(s) de R$ 0.01\n", c001);
}
