#include <stdio.h>

void main() {
    int time[3] = {0, 0, 0};

    printf("�ð��� �Է��ϼ��� : ");
    scanf("%d", &time[0]);
    printf("���� �Է��ϼ��� : ");
    scanf("%d", &time[1]);
    printf("�ʸ� �Է��ϼ��� : ");
    scanf("%d", &time[2]);

    printf("%d�ð� %d�� %d�ʴ� %d�� �Դϴ�.\n", time[0], time[1], time[2], time[0] * 3600 + time[1] * 60 + time[2]);
}