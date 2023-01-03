#include <stdio.h>
void main(){
    char s[10]; //몇 개의 문자가 가능?
    fputs("Input string: ", stdout);
    fgets(s, sizeof(s), stdin);
    //gets_s(s, sizeof(s));
    fputs("Your String: ", stdout);
    fputs(s, stdout);
}
