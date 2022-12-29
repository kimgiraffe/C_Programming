#include <stdio.h>

int GCD(int n1,  int n2);

void main(){
    int num1 = 0, num2 = 0;
    printf("input num1 : ");
    scanf("%d", &num1);
    printf("input num2 : ");
    scanf("%d", &num2);
    printf("GCD of num1 and num2 is %d\n", GCD(num1, num2));
}

int GCD(int n1, int n2)
{
    int MAX = n2, tmp;
    if(n1 >= n2){
        n2 = n1;
        n1 = MAX;
    }
    while(n1 != 0){
        tmp = n2 % n1;
        n2 = n1;
        n1 = tmp;
    }
    return n2;
}