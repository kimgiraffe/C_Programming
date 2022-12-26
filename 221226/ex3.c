#include <stdio.h>

int main() {

    int i, j, k;
    i = 2, j = 1;
    k = 8 + (i / 4.0 + 1.0 / j) * 3; //자동 형변환이 몇 번 발생하는가? 5번
    printf("%d\n", k);
    return 0;
}