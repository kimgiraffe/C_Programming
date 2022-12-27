#include <stdio.h>

void main() {
    int i, j;
    for(int i = 2; i <= 9; i++){
        for(int j = 1; j<=i; j++){
            printf("%d*%d=%2d  ", i, j, i * j);
        }
        printf("\n");
    }
}