#include <stdio.h>

int main() {

    int a = 5;
    int b = -3;

    printf("%d < %d is %d\n", a, b, a < b);
    printf("%d > %d is %d\n", a, b, a > b);
    printf("%d <= %d is %d\n", a, b, a <= b);
    printf("%d >= %d is %d\n", a, b, a >= b);
    printf("%d == %d is %d\n", a, b, a == b);
    printf("%d != %d is %d\n", a, b, a != b);
    printf("\"a는%d 이고 b는%d\" is %d\n", a, -b, a && b);
    printf("\"a는%d 이고 b는%d\" is %d\n", a, b, a && b);


    return 0;
}