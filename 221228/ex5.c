#include <stdio.h>

void main() {
    int i, j, num = 1;
    int x[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            x[i][j] = num;
            num++;
        }
    }

    /*
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            x[i][j] = i * 3 + j + 1;
        }
    }
    */


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

}