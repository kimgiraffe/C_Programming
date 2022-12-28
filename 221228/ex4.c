#include <stdio.h>

void main() {
    int num = 0, i;
    int flag = 0;
    int arr[10] = {1, 3, 5, 7, 21, 22, 24, 25, 49, 51};
    printf("Input: ");
    scanf("%d", &num);
    for(i = 0; i < 10; i++){
        if(arr[i] == num){
            printf("Result: exists\n");
            return;
        }
    }
    printf("Result: not exitsts\n");
    
}