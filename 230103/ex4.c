#include <stdio.h>
void main(void) {
    char ID[8]; 
    char name[10];
    fputs("학번 6자리를 입력하세요: ", stdout);
    fgets(ID, sizeof(ID), stdin);
    fputs("이름을 입력 하세요: ", stdout);
    fgets(name, sizeof(name), stdin);
    printf("학번: %s\n", ID);
    printf("이름: %s\n", name);
}
