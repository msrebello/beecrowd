#include<stdio.h>
#include<string.h>

void whichAnimalIs(char*, char*, char*);
int main(int argc, char const *argv[]) {
    char phylum[15], animalClass[15], diet[20];

    scanf("%s", phylum);
    scanf("%s", animalClass);
    scanf("%s", diet);

    whichAnimalIs(phylum, animalClass, diet);

    return 0;
}

void whichAnimalIs(char* a, char* b, char* c) {

    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'c')printf("aguia\n");
    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'o')printf("pomba\n");
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'o')printf("homem\n");
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'h')printf("vaca\n");
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'm')printf("pulga\n");
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'r')printf("lagarta\n");
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'h')printf("sanguessuga\n");
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'o')printf("minhoca\n");
}