#include <stdio.h>
void main() {
    int a = 0, b = 0, c = 0, MAX = 0, MIN = 0;
    printf("Enter the number 1 : ");
    scanf("%d", &a);
    printf("Enter the number 2 : ");
    scanf("%d", &b);
    printf("Enter the number 3 : ");
    scanf("%d", &c);
    if(a > b){
        if(b > c){ // a > b > c
            MAX = a;
            MIN = c;
        }
        else{ // b <= c
            if(a > c){ // a > c >= b
                MAX = a;
                MIN = b;
            }
            else{ // c >= a > b
                MAX = c;
                MIN = b;
            }
        }
    }
    else{ // a <= b
        if(b < c){ // c > b >= a
            MAX = c;
            MIN = a;
        }
        else{
            if(a > c){ // b >= a > c
                MAX = b;
                MIN = c;
            }
            else{ // b > c >= a
                MAX = b;
                MIN = a;
            }
        }
    }
    printf("The max number is %d\n", MAX);
    printf("The min number is %d\n", MIN);
}