#include <stdio.h>
#include <stdlib.h>
void deleteElement(int array[], int* size , int key);
int main()
{
    int arr[] = {1,3,3,2,4,5,6,7,8,3,3};
    int size = sizeof(arr) / sizeof(arr[1]);

    deleteElement(arr , &size , 3);

    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}

void deleteElement(int array[], int* size , int key){
    int arrTmp[100];
    int sizeTmp = 0;
    for(int i = 0 ; i <=* size - 1 ; i++){
        if(array[i] != key){
        arrTmp[sizeTmp] = array[i];
        sizeTmp++;
        }
    }

    for(int i = 0 ; i <= sizeTmp - 1 ; i++){
        array[i] = arrTmp[i];
    }
    (*size) = sizeTmp;
}
