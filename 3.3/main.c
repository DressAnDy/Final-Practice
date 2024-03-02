#include <stdio.h>
#include <stdlib.h>
int findElemnt(int array[], int size , int key);
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = findElement(arr, size , 5);
    printf("%d", result);
    return 0;
}

int findElement(int array[], int size , int key){
    for(int i = 0 ; i <= size - 1 ; i++){
        if(array[i] == key){
            return i;
        }
    }
}
