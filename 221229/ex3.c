#include <stdio.h>

int GCD(int n1, int n2)
{
    int i = 2, bound = 0, result = 1;
    if(n1 < n2) bound = n1;
    else bound = n2;

    while(i <= bound){
        if(n1 % i == 0 && n2 % i == 0){
            result = i;
        }
        i++;
    }
    return result;
}

void main(){
    int num1 = 0, num2 = 0;
    printf("input num1 : ");
    scanf("%d", &num1);
    printf("input num2 : ");
    scanf("%d", &num2);
    printf("GCD of num1 and num2 is %d\n", GCD(num1, num2));
}