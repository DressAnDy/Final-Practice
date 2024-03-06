#include <stdio.h>
#include <stdlib.h>
void reverseArr(int array[], int size);
int main()
{
    int arr[] = {2,3,1,5};
    int size = sizeof(arr) / sizeof(arr[1]);
    reverseArr(arr , size);

    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}
void reverseArr(int array[], int size){
    for(int i = 0 ; i <= size/2 - 1 ; i++){
        int tmp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = tmp;
    }
}
