#include <stdio.h>
#include <stdlib.h>
void deleteDuplication(int array[] , int* size);
int checkExistArray(int array[], int size , int arrTmp);
int main()
{
    int arr[] = {1,2,3,4,2,3,4,6,7,8,9,9};
    int size = sizeof(arr) / sizeof(arr[1]);

    deleteDuplication(arr , &size);
    for(int i = 0 ; i <= size -1 ; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}

void deleteDuplication(int array[] , int* size){
    int arrTmp[100];
    int sizeTmp = 0;
    for(int i = 0 ; i <=* size - 1 ; i++){
        if(checkExistArray(arrTmp , size , array[i]) == 1){
            arrTmp[sizeTmp] = array[i];
            sizeTmp++;
        }
    }
    for(int i = 0 ; i <= sizeTmp - 1 ; i++){
        array[i] = arrTmp[i];
    }
    (*size) = sizeTmp;
}

int checkExistArray(int array[], int size , int arrTmp){
    for(int i = 0 ; i <= size - 1 ; i++){
        if(array[i] == arrTmp) return 0;
    }
    return 1;
}
