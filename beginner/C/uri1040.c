#include<stdio.h>

#define MIN_GRADE_APPROVAL 5.0
#define MIN_GRADE_EXAM 6.9

float calculateAvg(float score1, float score2, float score3, float score4);
void wasApproved(float average);

int main(int argc, char const *argv[]) {
    float n1, n2, n3, n4;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float avg = calculateAvg(n1, n2, n3, n4);
    printf("Media: %.1f\n", avg);

    wasApproved(avg);

    return 0;
}

float calculateAvg(float score1, float score2, float score3, float score4) {
    return (score1 * 2 + score2 * 3 + score3 * 4 + score4 * 1) / 10;
}

void wasApproved(float average) {

 if(average < MIN_GRADE_APPROVAL)
        printf("Aluno reprovado.\n");
    else if(average <= MIN_GRADE_EXAM) {
        printf("Aluno em exame.\n");

        float examScore, finalAvg = 0;
        scanf("%f", &examScore);
        printf("Nota do exame: %.1f\n", examScore);

        finalAvg = (examScore + average) / 2;
        if(finalAvg <= MIN_GRADE_APPROVAL)
            printf("Aluno reprovado.\n");
        else
            printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", finalAvg);
    }
    else
        printf("Aluno aprovado.\n");
}