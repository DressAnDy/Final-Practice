#include <stdio.h>
#include <stdlib.h>
int findArray(int array[], int size, int key);
int main()
{
    int arr[] = {2,0,1,4,3,6,4,7,9};
    int size = sizeof(arr) / sizeof(arr[1]);
    int pos = findArray(arr , size , 4);
    printf("%d", pos);
    return 0;
}
int findArray(int array[], int size, int key){
    for(int i = 0 ; i <= size - 1; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}
