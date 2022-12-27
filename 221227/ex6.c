#include <stdio.h>

void main() {
    int i, j;
    for(i = 2; i <= 9; i++){
        if(i == 6) continue;
        for(j = 2; j <= 9; j++){
            if(j == 4) continue;
            printf("%d * %d = %2d ", j, i, i * j);
        }
        printf("\n");
    }
}