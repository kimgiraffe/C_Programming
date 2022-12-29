#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int i;
    srand(time(0));
    for(i = 0; i < 5; i++){
        printf("%d\n", rand());
    }
}
/*
srand 함수는 seed를 새로운 일련의 난수 seed로 설정한다.
seed가 srand로 설정되기 전에 rand를 호출하면 1이 기본 seed로 설정된다.
프로그램을 실행시킬 때마다 다른 결과가 나오게 하려면 srand(time(0))을 실행한다.
*/