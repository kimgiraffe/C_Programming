#include <stdio.h>

void main() {
    int score1[3] = {0};
    int score2[3] = {0};
    printf("ö���� ������ �Է��Ͻÿ�.\n");
    printf("���� : ");
    scanf("%d", &score1[0]);
    printf("���� : ");
    scanf("%d", &score1[1]);
    printf("���� : ");
    scanf("%d", &score1[2]);

    printf("������ ������ �Է��Ͻÿ�.\n");
    printf("���� : ");
    scanf("%d", &score2[0]);
    printf("���� : ");
    scanf("%d", &score2[1]);
    printf("���� : ");
    scanf("%d", &score2[2]);

    printf("ö��\n");
    printf("���� : %d��, ���� : %d��, ���� : %d��, ��� : %d��\n", score1[0], score1[1], score1[2], (score1[0] + score1[1] + score1[2])/3);
    printf("����\n");
    printf("���� : %d��, ���� : %d��, ���� : %d��, ��� : %d��\n", score2[0], score2[1], score2[2], (score2[0] + score2[1] + score2[2])/3);
}