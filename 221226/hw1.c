#include <stdio.h>
#define PI 3.14

int main() {

    int r;
    printf("원의 반지름을 입력하세요.\n반지름 : ");
    scanf("%d", &r);
    printf("원의 넓이는 %.2lf입니다.\n", r * r * PI);

    return 0;
}