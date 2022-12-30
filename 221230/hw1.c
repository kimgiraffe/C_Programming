#include <stdio.h>

void mulMatrix(int(*a)[3], int(*b)[4], int(*r)[4], int _i, int _j, int _k);

void main() {
    int i, j;
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][4] = {{1, 4, 7, 10}, {2, 5, 8, 11}, {3, 6, 9, 12}};
    int r[3][4] = {0};

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", *(*(a+i)+j));
        }
        printf("\n");
    }
    printf("\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", *(*(b+i)+j));
        }
        printf("\n");
    }
    printf("\n");

    mulMatrix(a, b, r, sizeof(r)/sizeof(*r), sizeof(*r)/sizeof(int), sizeof(a)/sizeof(*a));

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", *(*(r+i)+j));
        }
        printf("\n");
    }
}

void mulMatrix(int(*a)[3], int(*b)[4], int(*r)[4], int _i, int _j, int _k){
    int i, j, k;
    for(i = 0 ; i < _i; i++){
        for(j = 0; j < _j; j++){
            for(k = 0; k < _k; k++){
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}