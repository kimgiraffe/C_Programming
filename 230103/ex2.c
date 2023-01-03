#include <stdio.h>
void main(void)
{
    char c = 0;
    while (c != EOF) { //-1
        c = getchar();
        putchar(c);
    }
    printf ("bye\n");
}
