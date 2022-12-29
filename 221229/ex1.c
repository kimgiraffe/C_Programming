#include <stdio.h>

int add(int num1, int num2){
    return num1 + num2;
}

int sub(int num1, int num2){
    return num1 - num2;
}

int mul(int num1, int num2){
    return num1 * num2;
}

double div(double num1, double num2){
    return num1 / num2;
}

void main() {
    int n1 = 0, n2 = 0;
    printf("First num : ");
    scanf("%d", &n1);
    printf("Second num : ");
    scanf("%d", &n2);
    printf("Add : %d\n", add(n1, n2));
    printf("Sub : %d\n", sub(n1, n2));
    printf("Mul : %d\n", mul(n1, n2));
    printf("Div : %lf\n", div(n1, n2));
}