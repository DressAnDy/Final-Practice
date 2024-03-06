#include <stdio.h>
#include <stdlib.h>
void deleteElement(int array[], int* size , int pos);
int main()
{
    int arr[] = {2,5,1,3,7};
    int size = sizeof(arr) / sizeof(arr[1]);
    deleteElement(arr , &size , 2);
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}
void deleteElement(int array[], int* size , int pos){
    int tmp[100];
    int sizeTmp = 0;
    for(int i = 0 ; i <=* size - 1 ; i++){
        if(i != pos){
            tmp[sizeTmp] = array[i];
            sizeTmp++;
        }
    }
    (*size) = sizeTmp;
    for(int i = 0 ; i <= sizeTmp - 1 ; i++){
        array[i] = tmp[i];
    }
}
