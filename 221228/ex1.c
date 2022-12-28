#include <stdio.h>

void main() {
    int i, num = 0;
    int arr[3] = {0, 1, 2};

    for(i = 0; i < 3; i++){
        printf("number? ");
        scanf("%d", &num);
        arr[i] += num;
    }
    printf("arr[%d] = %d, arr[%d] = %d, arr[%d] = %d\n", 0, arr[0], 1, arr[1], 2, arr[2]);
}