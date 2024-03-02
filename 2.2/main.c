#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void outputArray(int array[], int size);
void deleteElement(int array[], int* size , int pos);

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos = 4;

    deleteElement(arr , &size , pos);
    outputArray(arr , size);

    return 0;
}

void deleteElement(int array[], int* size , int pos)
{
    for(int i = pos; i < *size - 1; i++){
        array[i] = array[i + 1];
    }
    (*size)--;
}


void outputArray(int array[], int size)
{
    for(int i = 0; i < size; i++){
        printf("%5d ", array[i]);
    }
}
