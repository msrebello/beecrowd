#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int t1, t2, t3;

    scanf("%d %d %d", &t1, &t2, &t3);

    if (t1 > t2) {
        if (t3 > t2 || t2 == t3)
            printf(":)\n"); // first
        else if (t2 > t3 && t2 - t3 < t1 - t2)
            printf(":)\n"); // fifth
        else if (t2 > t3 && t2 - t3 >= t1 - t2)
            printf(":(\n"); // sixth
        
        
    }
    else if (t1 < t2) {
        if (t2 > t3 || t2 == t3) // second
            printf(":(\n"); 
        if (t2 < t3 && t3 - t2 < t2 - t1)
            printf(":(\n"); // third
        else if (t2 < t3 && t3 - t2 >= t2 - t1)
            printf(":)\n"); // fourth
    }
    else { // seven & eight
        if (t3 > t2)
            printf(":)\n"); 
        else
            printf(":(\n");
    }

    return 0;
}