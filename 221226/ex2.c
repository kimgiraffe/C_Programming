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
    printf("\"a��5 �̰� b��3\" is %2d\n", a == 5 && b == 3);
    printf("\"a��5 �̰� b��-3\" is %2d\n", a == 5 && b == -3);


    return 0;
}