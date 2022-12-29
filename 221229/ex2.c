#include <stdio.h>

double toUSD(double KRW){
    return KRW / 1195.50;
}

double toEUR(double KRW){
    return KRW / 1245.89;
}

int toJPY(double KRW){
    return KRW / 10.1949;
}

void main(){
    int K = 0;
    printf("input KRW : ");
    scanf("%d", &K);
    printf("USD : %.2lf\n", toUSD(K));
    printf("EUR : %.2lf\n", toEUR(K));
    printf("JPY : %d\n", toJPY(K));
}