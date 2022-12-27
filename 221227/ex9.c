#include <stdio.h>
#include <math.h>
void main() {
    float a, b, c, D, root1, root2;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 * a * c;              	  	//판별식 계산
    if(D > 0){
        D = sqrt(D);               	//제곱근 계산
        root1 = (-1 * b + D) / (2 * a);			//근1
        root2 = (-1 * b - D) / (2 * a);			//근2
        printf("root1 = %.4f and root2 = %.4f.\n", root1, root2);
    }
    else if(D == 0){
        printf("root = %.4f.\n", (-1 * b) / (2 * a));
    }
    else{
        printf("No root exists.\n");
    }
}
