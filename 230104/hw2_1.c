#include <stdio.h>

void main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w+");
    char inchar;
    int upper = 0, lower = 0, arabic = 0, blanks = 0;

    while((fscanf(in, "%c", &inchar)) != EOF){
        if(inchar >= 'A' && inchar <= 'Z') upper++;
        else if(inchar >= 'a' && inchar <= 'z') lower++;
        else if(inchar >= '1' && inchar <= '9') arabic++;
        else {
            if(inchar == ' ' || inchar == '\t') blanks++;
        }
    }
    fprintf(out, "Number of upper case letters : %d\n", upper);
    fprintf(out, "Number of lower case letters : %d\n", lower);
    fprintf(out, "Number of arabic characters : %d\n", arabic);
    fprintf(out, "Number of blanks : %d\n", blanks);

    printf("Number of upper case letters : %d\n", upper);
    printf("Number of lower case letters : %d\n", lower);
    printf("Number of arabic characters : %d\n", arabic);
    printf("Number of blanks : %d\n", blanks);

    fclose(in);
    fclose(out);
}