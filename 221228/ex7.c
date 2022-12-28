#include <stdio.h>

void main() {
    int i, j, k, num = 1;
    int x[3][3];
    int y[3][4];
    int r[3][4] = {0};  //x와 y의 곱행렬 r 선언과 초기화
    for(i = 0; i < 3; i++){     //배열 x에 값 할당
        for(j = 0; j < 3; j++){
            x[i][j] = num;
            num++;
        }
    }
    num = 1;
    for(i = 0; i < 4; i++){     //배열 y에 값 할당
        for(j = 0; j < 3; j++){
            y[j][i] = num;
            num++;
        }
    }
    for(i = 0; i < 3; i++){     //배열 x 출력
        for(j = 0; j < 3; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < 3; i++){     //배열 y 출력
        for(j = 0; j < 4; j++){
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < 3; i++){     //곱행렬 r 계산
        for(j = 0; j < 4; j++){
            for(k = 0; k < 3; k++){
                r[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    for(i = 0; i < 3; i++){     //배열 r 출력
        for(j = 0; j < 4; j++){
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
}