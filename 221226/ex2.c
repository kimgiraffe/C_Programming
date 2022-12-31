#include <stdio.h>

int main() {

    int a = 5;
    int b = -3;

    printf("%2d < %2d is %2d\n", a, b, a < b);
    printf("%2d > %2d is %2d\n", a, b, a > b);
    printf("%2d <= %2d is %2d\n", a, b, a <= b);
    printf("%2d >= %2d is %2d\n", a, b, a >= b);
    printf("%2d == %2d is %2d\n", a, b, a == b);
    printf("%2d != %2d is %2d\n", a, b, a != b);
    printf("\"a는5 이고 b는3\" is %2d\n", a == 5 && b == 3);
    printf("\"a는5 이고 b는-3\" is %2d\n", a == 5 && b == -3);


    return 0;
}