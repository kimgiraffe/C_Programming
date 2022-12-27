#include <stdio.h>

void main(){
    char type = '\0';       //vehicle type
    int h = 0, m = 0, c = 0;
    printf("Type : ");
    scanf("%c", &type);     //Input type
    printf("Hour : ");
    scanf("%d", &h);        //Input hour
    printf("Minute : ");
    scanf("%d", &m);        //Input minute

    switch(type) {
        case 'c':   //car
            c += (h * 60 + m)/10 * 2;
            printf("Parking Charge : %d$\n", c);
            break;
        case 'b':   //bus
            c += (h * 60 + m)/10 * 3;
            printf("Parking Charge : %d$\n", c);
            break;
        case 't':   //truck
            c += (h * 60 + m)/10 * 5;
            printf("Parking Charge : %d$\n", c);
            break;
        default:    //invalid input
            printf("Error! Check vehicle type.\n");
            break;
    }
}