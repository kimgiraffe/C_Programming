#include <stdio.h>

void main() {
    int score1[3] = {0};
    int score2[3] = {0};
    printf("철수의 점수를 입력하시오.\n");
    printf("국어 : ");
    scanf("%d", &score1[0]);
    printf("영어 : ");
    scanf("%d", &score1[1]);
    printf("수학 : ");
    scanf("%d", &score1[2]);

    printf("영희의 점수를 입력하시오.\n");
    printf("국어 : ");
    scanf("%d", &score2[0]);
    printf("영어 : ");
    scanf("%d", &score2[1]);
    printf("수학 : ");
    scanf("%d", &score2[2]);

    printf("철수\n");
    printf("국어 : %d점, 영어 : %d점, 수학 : %d점, 평균 : %d점\n", score1[0], score1[1], score1[2], (score1[0] + score1[1] + score1[2])/3);
    printf("영희\n");
    printf("국어 : %d점, 영어 : %d점, 수학 : %d점, 평균 : %d점\n", score2[0], score2[1], score2[2], (score2[0] + score2[1] + score2[2])/3);
}