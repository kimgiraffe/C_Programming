#include <stdio.h>

void main() {
    int i, j;
    char c[50] = {0, };
    printf("Input : ");

    for(i = 0; ; i++){
        scanf("%c", &c[i]);
        if(c[i] == '\n')
            break;
    }

    printf("Result : ");

    for(j = i - 1; j >= 0; j--){
        printf("%c", c[j]);
    }
}