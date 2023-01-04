#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
    FILE *in = fopen("input_num.txt", "r");
    FILE *out = fopen("output_num.txt", "w+");

    int index = 0, num, i = 0;
    char str[1024];
    int flag = 1;   //예외처리용 flag; 0인 경우 Error
    int a[1024] = {0, };
    int b[1024] = {0, };

    //첫째 줄 읽기
    fgets(str, 1024, in);
    index = atoi(str);
    fprintf(out, "index = %d\n", index);

    //둘째 줄 읽기
    fgets(str, 1024, in);
    char * ptr = strtok(str, " ");  //공백을 구분하여 정수형 배열 a에 저장
    while(ptr != NULL){
        num = atoi(ptr);    //int 변환
        a[i] = num;
        i++;
        ptr = strtok(NULL, " ");
    }
    //파일 출력
    fprintf(out, "A = [");
    for(int idx = 0; idx < i; idx++){
        fprintf(out, "%d", a[idx]);
        if(idx == i - 1) break;
        fprintf(out, "%c ", ',');
    }
    fprintf(out, "]\n");

    if(index >= i) flag = 0;       //index가 정수형 배열 a의 길이보다 큰 경우 에외처리
    i = 0; //정수형 배열 b의 인덱스를 0으로 초기화

    //셋째 줄 읽기
    fgets(str, 1024, in);
    ptr = strtok(str, " ");     //공백을 구분하여 정수행 배열 b에 저장
    while(ptr != NULL){
        num = atoi(ptr);    //int 변환
        b[i] = num;
        i++;
        ptr = strtok(NULL, " ");
    }
    //파일 출력
    fprintf(out, "B = [");
    for(int idx = 0; idx < i; idx++){
        fprintf(out, "%d", b[idx]);
        if(idx == i - 1) break;
        fprintf(out, "%c ", ',');
    }
    fprintf(out, "]\n");

    if(index >= i) flag = 0;    //index가 정수형 배열 b의 길이보다 큰 경우 예외처리

    if(index < 0 || !flag){     //index가 0보다 작거나 배열 a 또는 b의 길이보다 큰 경우 Error
        fprintf(out, "Error: index out of range\n");
    }
    else{
        fprintf(out, "A[%d] + B[%d] = %d\n", index, index, a[index] + b[index]);
    }
    
    fclose(in);
    fclose(out);
}