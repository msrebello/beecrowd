#include<stdio.h>
#include<math.h>

int aIsVallid(float coeficient);
float calculateDelta(float a, float b, float c);
void calculateRoots(float delta, float a, float b, float c, float *x1, float* x2);
void showRoots(float x1, float x2);

int main(int argc, char const *argv[]) {
    float A, B, C, x1 = 0, x2 = 0;
    scanf("%f %f %f", &A, &B, &C);

    if(aIsVallid(A) == 0) {
        printf("Impossivel calcular\n");
    }
    else {
        float delta = calculateDelta(A, B, C);

       if(delta < 0) {
            printf("Impossivel calcular\n");
       }
       else {
            calculateRoots(delta, A, B, C, &x1, &x2);
            showRoots(x1, x2);
       }
    }  
       
    return 0;
}

int aIsVallid(float coeficient) {
    return coeficient != 0 ? 1 : 0;
}

float calculateDelta(float a, float b, float c) {
    return pow(b, 2) - 4 * a * c;
}

void calculateRoots(float delta, float a, float b, float c, float* x1, float* x2) {
    *x1 = (- b + sqrt(delta)) / (2 * a);
    *x2 = (- b - sqrt(delta)) / (2 * a); 
}

void showRoots(float x1, float x2) {
    printf("R1 = %.5f\n", x1);
    printf("R2 = %.5f\n", x2);

}

