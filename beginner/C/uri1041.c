#include<stdio.h>

const char* getCordinate(float x, float y);

int main(int argc, char const *argv[]) {

    float x, y;
    scanf("%f %f", &x, &y);

    printf("%s\n", getCordinate(x,y));

    return 0;
}

const char* getCordinate(float x, float y) {

    if(x == 0 && y == 0)
        return "Origem";
    else if(x == 0)
        return "Eixo Y";
    else if(y == 0)
        return "Eixo X";
    else if(x > 0 && y > 0)
        return "Q1";
    else if(x < 0 && y > 0)
        return "Q2";
    else if(x < 0 && y < 0)
        return "Q3";
    else if(x > 0 && y < 0)
        return "Q4";
}