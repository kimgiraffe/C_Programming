#include <stdio.h>

void main() {
    FILE *in = fopen("arrays.txt", "r");
    FILE *out = fopen("mulMatrix.txt", "w+");

    int tmp = 0, i, j, k;
    int a[3][3] = {0, };
    int b[3][4] = {0, };
    int r[3][4] = {0, };
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            fscanf(in, "%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            fscanf(in, "%d", &b[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            for(k = 0; k < 3; k++){
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            fprintf(out, "%d ", r[i][j]);
        }
        fprintf(out, "%c", '\n');
    }
    printf("'mulMatrix.txt' is created\n");

    fclose(in);
    fclose(out);
}