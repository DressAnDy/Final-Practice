#include <stdio.h>
#include <stdlib.h>
void passNumberToArray(int array[], int* size , int pos, int key);
void outputArray(int array[], int size);
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos = 2;
    int key = 10;

    passNumberToArray(arr, &size, pos, key);
    outputArray(arr , size);
    return 0;
}

void passNumberToArray(int array[], int* size , int pos , int key){
    for(int i =* size ; i > pos ; i--){
        array[i] = array[i - 1];
    }
    array[pos] = key;
    (*size)++;
}

void outputArray(int array[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", array[i]);
    }
}
// 1 2 3 4 5
// 0 1 2 3 4 5
