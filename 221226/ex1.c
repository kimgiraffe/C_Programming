#include <stdio.h>

int main() {

    int a = 1;
    int b = 1;
    int c = 0;

    printf("%d AND %d = %d\n", a, b, a && b);
    printf("%d AND %d = %d\n", a, c, a && c);
    printf("%d  OR %d = %d\n", a, b, a || b);
    printf("%d  OR %d = %d\n", a, c, a || c);
    printf("  NOT %d = %d\n", a, !a);
    printf("  NOT %d = %d\n", c, !c);

    return 0;
}