#include <stdio.h>
#define SIZE 30

int binary_search_arr(int*, int, int, int);
void print_arr(int*, int);

int array[SIZE] = {
    3,  4,  11, 12, 13, 14, 15, 19, 23, 32,
    39, 41, 42, 43, 44, 48, 52, 53, 55, 57,
    60, 66, 69, 74, 75, 77, 85, 87, 97, 99
    };

void main() {
    int n, i;

    printf("> input array:\n"); 
    print_arr(array, SIZE);    //print arr[] by 10 rows

    printf("\n> input number: "); 
    scanf("%d", &n);    //no to search
    while((i = binary_search_arr(array, n, 0, SIZE-1)) == -1) {  //search until a match found
        printf("> input not found, please retry: ");
        scanf("%d", &n);    //no to search
    } 

    printf("> found at index=%d: arr[%d] = %d", i, i, array[i]);    //print output: index, arr[index]
}

int binary_search_arr(int* arr, int n, int s, int e){
    int mid = (s + e) / 2;
    if(s > e) return -1;
    else if(arr[mid] < n) return binary_search_arr(arr, n, mid + 1, e);
    else if(arr[mid] > n) return binary_search_arr(arr, n, s, mid - 1);
    else return mid;
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