#include <stdio.h>
void main(void) {
	char ID[8]; 
	char name[10];
	fputs("학번 6자리를 입력하세요: ", stdout);
	fgets(ID, sizeof(ID), stdin);
	while(getchar() != '\n');  //입력 overflow 발생을 고려하여 버퍼를 비운다.
	//입력에＇\n＇이 포함된 경우 ＇\0＇으로 바꾼다.
	for(int i = 0; i < 8; i++){
		if(ID[i] == '\n') ID[i] = '\0';
	}
    
	fputs("이름을 입력 하세요: ", stdout);
	fgets(name, sizeof(name), stdin);
	while(getchar() != '\n');  //입력 overflow 발생을 고려하여 버퍼를 비운다.
	//입력에＇\n＇이 포함된 경우 ＇\0＇으로 바꾼다.
	for(int i = 0; i < 10; i++){
		if(name[i] == '\n') name[i] = '\0';
	}
    
	printf("학번: %s\n", ID);
	printf("이름: %s\n", name);
}