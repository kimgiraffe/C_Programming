/*
    실습#2
    아래 데이터 타입의 byte length를 출력하는 프로그램을 작성하시오.
    
    char
    int
    long long
    float
    double
    long double
*/
#include <stdio.h>

int main() {

    printf("char: %d byte\n", sizeof(char));
    printf("int: %d byte\n", sizeof(int));
    printf("long long: %d byte\n", sizeof(long long));
    printf("float: %d byte\n", sizeof(float));
    printf("double: %d byte\n", sizeof(double));
    printf("long double: %d byte\n", sizeof(long double));
    
    return 0;
}