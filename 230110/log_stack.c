#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define IN_FILE_NAME "keylog_in_small.txt"
//#define IN_FILE_NAME "keylog_in_large.txt"
#define OUT_FILE_NAME "output.txt"
#define BUFFER_SIZE 10000

void decodeString(char[], char[], char[]);
void pushArray(char array[], int top, char data);
char popArray(char array[], int top);

int main() {

    //open input, output files 
	FILE* fpIn = fopen(IN_FILE_NAME, "rt");
	FILE* fpOut = fopen(OUT_FILE_NAME, "wt");
	if (fpIn == NULL || fpOut == NULL) {
		printf("input error\n");
		return 1;
	}

	char buffer[BUFFER_SIZE] = { 0 };
	char decoded[BUFFER_SIZE] = { 0 };
	char temp[BUFFER_SIZE] = { 0 };     //for stack operation

    //check start time
	clock_t start = clock();

	while (fgets(buffer, BUFFER_SIZE, fpIn) != NULL) {
		decodeString(buffer, decoded, temp);
		fprintf(fpOut, "%s", decoded);
	}

    //check end time 
	clock_t end = clock();

    //print elapsed time
	printf("Elapsed time: %fs\n", (double)(end - start) / CLOCKS_PER_SEC);

    //close input, output files 
	if (fclose(fpIn) != 0 || fclose(fpOut) != 0) {
		printf("output error\n");
		return 1;
	}
}

void decodeString(char buffer[], char decoded[], char temp[]) {

	int i, j;
    int decodedTop, tempTop;    //stack top of 'decoded' & 'temp'
	char c;

	decodedTop = tempTop = -1;          //reset stack top
    memset(decoded, 0, BUFFER_SIZE);    //initialize 'decoded' with NULL
    memset(temp, 0, BUFFER_SIZE);       //initialize 'temp' with NULL

	for (i = 0; i < strlen(buffer); i++) {
		c = buffer[i];

		if (c == '<' && decodedTop + 1 != 0) {  
            //cursor backward
			c = popArray(decoded, decodedTop);
			pushArray(temp, tempTop, c);
		}
		else if (c == '>' && tempTop + 1 != 0) {
            //cursor forward
			c = popArray(temp, tempTop);
			pushArray(decoded, decodedTop, c);

		}
		else if (c == '-' && decodedTop + 1 != 0) {    
            //delete a char at 'pos'
			c = popArray(decoded, decodedTop);
		}
		else if (isalpha(c) || isdigit(c) || c == '\n') {   
            //insert a char 'c' at 'pos' 
			pushArray(decoded, decodedTop, c);
		}

	}
	//concatenate 'temp' to 'decoded' (by stack push and pop!!)
	while(tempTop != -1){
		c = popArray(temp, tempTop);
		pushArray(decoded, decodedTop, c);
	}

    //termiate 'decoded' with NULL
	decoded[decodedTop] = 0;
}

void pushArray(char array[], int top, char data) {
    //push 'data' on stack if not stack full
	if(top != BUFFER_SIZE - 1){
		array[++top] = data;
	}
}

char popArray(char array[], int top) {
    //pop stack
	if(top != -1){
		return array[top--];
	}
}
