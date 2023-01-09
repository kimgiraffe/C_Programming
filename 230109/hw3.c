#include <stdio.h>
#define SIZE 30

int linear_search_arr(int*, int);
void print_arr(int*, int);

int array[SIZE] = {
    97, 60, 77, 32, 12, 23, 44, 52, 11, 13, 
    43, 3,  4,  14, 75, 42, 99, 41, 66, 19,
    87, 69, 85, 74, 15, 39, 48, 57, 53, 55
    };

void main() {
    int n, i;

    printf("> input array:\n"); 
    print_arr(array, SIZE);    //print arr[] by 10 rows

    printf("> input number: "); 
    scanf("%d", &n);    //number to search
    while((i = linear_search_arr(array, n)) == -1) {	//search until a match found
        printf("> not found, please retry: ");
        scanf("%d", &n);    //no to search
    } 

    printf("> found at index = %d, arr[%d] = %d", i, i, array[i]);    //print output: index, arr[index]
}

int linear_search_arr(int* arr, int n){
    int i;
    for(i = 0; i < SIZE; i++){
        if(n == arr[i]) return i;
    }
    return -1;
}

void print_arr(int* arr, int size){
    int i, j;
    for(i = 0; i < size / 10; i++){
        for(j = 0; j < 10; j++){
            printf("%5d ", arr[i * 10 + j]);
        }
        printf("\n");
    }
}