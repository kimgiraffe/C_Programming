#include <stdio.h>

void main(){
    double n1 = 0.00, n2 = 0.00;
    char op = '\0';
    for(int i = 1; i <= 5; i++){
        printf("사칙 연산식을 입력하세요[예)2 * 2] : ");
        scanf("%lf %c %lf", &n1, &op, &n2);
        switch (op) {
        case '+':
            printf("%.2lf %c %.2lf = %.2lf\n", n1, op, n2, n1 + n2);
            break;
        case '*':
            printf("%.2lf %c %.2lf = %.2lf\n", n1, op, n2, n1 * n2);
            break;
        case '-':
            printf("%.2lf %c %.2lf = %.2lf\n", n1, op, n2, n1 - n2);
            break;
        case '/':
            printf("%.2lf %c %.2lf = %.2lf\n", n1, op, n2, n1 / n2);
            break;
        default:
            printf("올바른 연산식을 입력하세요");
        }
    }
}