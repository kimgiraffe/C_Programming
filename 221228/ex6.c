#include <stdio.h>

void main() {
    int i, j, num = 1;
    int y[3][4];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            y[j][i] = num;
            num++;
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }

}