#include <stdio.h>
#include <math.h>
void main() {
    float a, b, c, D, root1, root2;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 * a * c;              	  	//판별식 계산
    D = sqrt(D);               	//제곱근 계산
    root1 = (-b + D) / (2 * a);			//근1
    root2 = (-b - D) / (2 * a);			//근2
    printf("root1 = %.4f and root2 = %.4f.\n", root1, root2);
}
