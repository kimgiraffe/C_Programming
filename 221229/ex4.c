#include <stdio.h>

int Fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return Fib(n-1) + Fib(n-2);
    }
}

void main(){
    int num = 0;
    printf("Number : ");
    scanf("%d", &num);
    printf("%dth fibonacci number : %d\n", num, Fib(num));
}