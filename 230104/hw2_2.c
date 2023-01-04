#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w+");
    char buf[256];
    char inchar;
    int upper = 0, lower = 0, arabic = 0, blanks = 0, i;

    while(!feof(in)){
        fgets(buf, sizeof(buf), in);
        for(i = 0; buf[i]; i++){
            if(buf[i] >= 'A' && buf[i] <= 'Z') upper++;
            else if(buf[i] >= 'a' && buf[i] <= 'z') lower++;
            else if(buf[i] >= '1' && buf[i] <= '9') arabic++;
            else {
                if(buf[i] == ' ' || buf[i] == '\t') blanks++;
            }
        }
    }
    
    char c[1024];
    itoa(upper, c, 10);

    fputs("Number of upper case letters : ", out);
    fputs(c, out);
    fputs("\n", out);

    itoa(lower, c, 10);
    fputs("Number of lower case letters : ", out);
    fputs(c, out);
    fputs("\n", out);

    itoa(arabic, c, 10);
    fputs("Number of arabic characters : ", out);
    fputs(c, out);
    fputs("\n", out);

    itoa(blanks, c, 10);
    fputs("Number of blanks : ", out);
    fputs(c, out);
    fputs("\n", out);

    printf("Number of upper case letters : %d\n", upper);
    printf("Number of lower case letters : %d\n", lower);
    printf("Number of arabic characters : %d\n", arabic);
    printf("Number of blanks : %d\n", blanks);

    fclose(in);
    fclose(out);
}