#include <stdio.h>
#define PI 3.14

int main() {

    double r;
    printf("원의 반지름을 입력하세요.\n반지름 : ");
    scanf("%lf", &r);
    printf("원의 넓이는 %.2lf입니다.\n", r * r * PI);

    return 0;
}