/*
    실습#1
    아래 이진수의 타입이 signed char인 경우를 가정하여 십진수로 변환하시오.
    01001111 -> 1 + 2 + 4 + 8 + 64 = 79
    00110011 -> 1 + 2 + 16 + 32 = 51
    10101001 -> 10101000 -> 01010111 -87
    11110000 -> 11101111 -> 00010000 -16
*/
#include <stdio.h>

int main() {
    signed char c;
    c = 0b01001111;
    printf("01001111: %d\n", c);

    c = 0b00110011;
    printf("00110011: %d\n", c);

    c = 0b10101001;
    printf("10101001: %d\n", c);

    c = 0b11110000;
    printf("11110000: %d\n", c);

    return 0;
}