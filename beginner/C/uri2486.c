/*
    @author: Matheus Rebello;
    @date: 05/03/2024;
    @name: C Mais ou Menos?;

*/

#include <stdio.h>
#include <stdbool.h>

#define SUCO_DE_LARANJA_MG 120
#define MORANGO_FRESCO_MG 85
#define MAMAO_MG 85
#define GOIABA_VERMELHA_MG 70
#define MANGA_MG 56
#define LARANJA_MG 50
#define BROCOLIS_MG 34
#define LIMITE_INFERIOR_VITAMINA_C 110
#define LIMITE_SUPERIOR_VITAMINA_C 130

bool equals(const char *str1, const char *str2);

int main(int argc, char const *argv[])
{
    int T;
    scanf("%d", &T);

    while (T)
    {
        int N;
        char alimento[100];
        int total_vitaminaC = 0;
        for (int i = 0; i < T; i++)
        {
            scanf("%d ", &N);
            fgets(alimento, sizeof(alimento), stdin);

            if (equals(alimento, "suco de laranja"))
            {
                total_vitaminaC += N * SUCO_DE_LARANJA_MG;
            }
            else if (equals(alimento, "morango fresco"))
            {
                total_vitaminaC += N * MORANGO_FRESCO_MG;
            }
            else if (equals(alimento, "mamao"))
            {
                total_vitaminaC += N * MAMAO_MG;
            }
            else if (equals(alimento, "goiaba vermelha"))
            {
                total_vitaminaC += N * GOIABA_VERMELHA_MG;
            }
            else if (equals(alimento, "manga"))
            {
                total_vitaminaC += N * MANGA_MG;
            }
            else if (equals(alimento, "laranja"))
            {
                total_vitaminaC += N * LARANJA_MG;
            }
            else
            {
                total_vitaminaC += N * BROCOLIS_MG;
            }
        }

        int recomendado = 0;

        if (total_vitaminaC < LIMITE_INFERIOR_VITAMINA_C)
        {
            recomendado = LIMITE_INFERIOR_VITAMINA_C - total_vitaminaC;
            printf("Mais %d mg\n", recomendado);
        }
        else if (total_vitaminaC > LIMITE_SUPERIOR_VITAMINA_C)
        {
            recomendado = total_vitaminaC - LIMITE_SUPERIOR_VITAMINA_C;
            printf("Menos %d mg\n", recomendado);
        }
        else
        {
            recomendado = total_vitaminaC;
            printf("%d mg\n", recomendado);
        }

        scanf("%d", &T);
    }

    return 0;
}

bool equals(const char *str1, const char *str2)
{
    int i;

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            return false;
        }
    }

    if (str1[i + 1] == '\0' && str2[i] == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}