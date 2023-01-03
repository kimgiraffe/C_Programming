#include <stdio.h>
void main(void)
{
    char c = 0;
    int count = 0;
    while (c != 'q') {
        c = getchar();
        putchar(c);
        count += 1;
        printf("%d", count);
    }
}