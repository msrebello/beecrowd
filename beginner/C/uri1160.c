#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int pa, pb;
    double ga, gb;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

        int count_years = 0;
        int npa = pa, npb = pb;
        while (npa <= npb && count_years <= 100)
        {
            npa += floor(npa * ga / 100);
            npb += floor(npb * gb / 100);
            count_years++;
        }

        if(count_years > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", count_years);
    }

    return 0;
}
