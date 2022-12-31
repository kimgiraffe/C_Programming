#include <stdio.h>

void main() {
    int time[3] = {0, 0, 0};

    printf("시간을 입력하세요 : ");
    scanf("%d", &time[0]);
    printf("분을 입력하세요 : ");
    scanf("%d", &time[1]);
    printf("초를 입력하세요 : ");
    scanf("%d", &time[2]);

    printf("%d시간 %d분 %d초는 %d초 입니다.\n", time[0], time[1], time[2], time[0] * 3600 + time[1] * 60 + time[2]);
}