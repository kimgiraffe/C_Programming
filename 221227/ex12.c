#include <stdio.h>

void main() {
    int i, j, k, m;
    for(i = 5; i >= 1; i--){
        for(m = i - 1; m >= 1; m--){
            printf(" ");
        }
        for(k = 5 - i; k >= 1; k--){
            printf("*");
        }
        for(j = 5 - i; j >= 0; j--){
            printf("*");
        }
        printf("\n");
    }
}