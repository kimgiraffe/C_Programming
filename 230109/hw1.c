#include <stdio.h>
#define SIZE 30

void sort_arr(int*, int);
void select(int*, int, int);
void swap_arr_elmt(int*, int, int);
void print_arr(int*, int);

int array[SIZE] = {
    97, 60, 77, 32, 12, 23, 44, 52, 11, 13, 
    43, 3,  4,  14, 75, 42, 99, 41, 66, 19,
    87, 69, 85, 74, 15, 39, 48, 57, 53, 55
    };

void main()
{
    printf("> input array:\n"); 
    print_arr(array, SIZE);    //print arr[] by 10 rows

    sort_arr(array, SIZE);   //selection sort

    printf("> selection sort done:\n");  
    print_arr(array, SIZE);    //print arr[] by 10 rows
}

void sort_arr(int* arr, int size){
    int i;
    for(i = 0; i < size - 1; i++){
        select(arr, i, size - 1);
    }
}

void select(int* arr, int start, int end){
    int i;
    for(i = start + 1; i <= end; i++){
        if(arr[start] > arr[i]) swap_arr_elmt(arr, start, i);
    }
}

void swap_arr_elmt(int* arr, int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
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