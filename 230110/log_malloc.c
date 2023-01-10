#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define IN_FILE_NAME "keylog_in_small.txt"
//#define IN_FILE_NAME "keylog_in_large.txt"
#define OUT_FILE_NAME "output.txt"
#define BUFFER_SIZE 10000

void decodeString(char[], char[]);
void deleteElement(char[], int);
void insertElement(char[], int, char);

int main() {

    //open input, output files 
	FILE* fpIn = fopen(IN_FILE_NAME, "rt");
	FILE* fpOut = fopen(OUT_FILE_NAME, "wt");
	if (fpIn == NULL || fpOut == NULL) {
		printf("input error\n");
		return 1;
	}

	int pos;    //postion in 'buffer'
    int c;      //char to read      
	int size = 1024;    //unit size of buffer allocation
	char* buffer = (char*)malloc(size); //malloc 'buffer'

    //check start time
	clock_t start = clock();

	while (1) {     //read file, exit when EOF
        pos = 0;    //reset buffer 

		while (1) { //read line, exit when EOL or EOF

			//read input file char by char
            //put 'c' in buffer if not EOF
			c = fgetc(fpIn);
			
			buffer[pos] = c;
			

            //increase 'pos'
			pos++;

			if (pos >= size - 1) {  // buffer overflow
			    
                //double the buffer size by realloc()
				buffer = (char*)realloc(buffer, size * 2);

			}
			if (c == EOF || c == '\n') break;       //exit when EOF or EOL
		}
		if (c == EOF) break;    //exit when EOF

		buffer[pos] = 0;        //terminate 'buffer' with NULL

        char* decoded = (char*)calloc(size, sizeof(char));      //malloc and init 'decoded' as the same size of 'buffer'

		decodeString(buffer, decoded);      //decode a line
		fprintf(fpOut, "%s", decoded);      //write a line

		size = 1024;
		buffer = (char*)realloc(buffer, size);  //reset 'buffer' size to 1024
		free(decoded);      //'decoded' buffer free
	}
	free(buffer);   //input 'buffer' free

    //end time stamp
	clock_t end = clock();

    //print elapsed time
	printf("Elapsed time: %fs\n", (double)(end - start) / CLOCKS_PER_SEC);

    //close input, output files 
	if (fclose(fpIn) != 0 || fclose(fpOut) != 0) {
		printf("output error\n");
		return 1;
	}
}

void decodeString(char buffer[], char decoded[]) {

	int pos = 0;
	int i;
	char c;

    //memset(decoded, 0, BUFFER_SIZE);        //initialize 'decoded' with NULL
	
	for (i = 0; i < strlen(buffer); i++) { 
		c = buffer[i];

		if (c == '<' && pos > 0) {  
            //cursor backward
			pos--;
		}
		else if (c == '>' && pos < strlen(decoded)) {   
            //cursor forward
			pos++;
		}
		else if (c == '-' && pos != 0) {    
            //delete a char at 'pos'
			deleteElement(decoded, pos);
			pos--;
		}
		else if (isalpha(c) || isdigit(c) || c == '\n') {   
            //insert a char 'c' at 'pos' 
			insertElement(decoded, pos, c);
			pos++;
		}
	}
}

void deleteElement(char decoded[], int pos) {   

    //shift left 'decoded' buffer from 'pos'+1 to end (delete a char at 'pos')
    //termiate 'buffer' with NULL
	int i;
	for(i = pos; i <= strlen(decoded);i++){
		decoded[i-1] = decoded[i];
	}
}

void insertElement(char decoded[], int pos, char c) {

    //shift right 'decoded' buffer from 'pos' to end 
    //insert a char 'c' at 'pos' 
	int i;
	for(i = strlen(decoded); i >= pos; i--){
		decoded[i+1] = decoded[i];
	}
	decoded[pos] = c;
}