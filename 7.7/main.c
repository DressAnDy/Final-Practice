#include <stdio.h>
#include <stdlib.h>
void arrayRev(int array[], int size);
void outputArray(int array[], int size);
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[1]);
    arrayRev(arr , size);
    outputArray(arr , size);
    return 0;
}

void arrayRev(int array[], int size){
    for(int i = 0 ; i <= size/2 - 1 ; i++){
        int tmp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = tmp;
    }
}
void outputArray(int array[], int size){
    for(int i = 0 ; i <= size - 1; i++){
        printf("%d", array[i]);
    }
}
