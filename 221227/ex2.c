#include <stdio.h>

void main(){
    int s = 0;
    printf("Enter the score(0-100):");
    scanf("%d", &s);
    printf("The grade is ");
    if(s >= 91){
        printf("A\n");
    }
    else if(s >= 81){
        printf("B\n");
    }
    else if(s >= 71){
        printf("C\n");
    }
    else if(s >= 61){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
    
}