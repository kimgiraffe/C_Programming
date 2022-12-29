#include <stdio.h>
#define _USD 1195.50
#define _EUR 1245.89
#define _JPY 10.1949

double toUSD(double KRW);
double toEUR(double KRW);
int toJPY(double KRW);

void main(){
    int K = 0;
    printf("input KRW : ");
    scanf("%d", &K);
    printf("USD : %.2lf\n", toUSD(K));
    printf("EUR : %.2lf\n", toEUR(K));
    printf("JPY : %d\n", toJPY(K));
}

double toUSD(double KRW){
    return KRW / _USD;
}
double toEUR(double KRW){
    return KRW / _EUR;
}
int toJPY(double KRW){
    return KRW / _JPY;
}