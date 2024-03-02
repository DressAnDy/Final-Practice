#include <stdio.h>
#include <stdlib.h>
void concat(int array[], int* size , int sub[], int sizeSub);
void divArray(int array[], int* size , int pos);
int main()
{
    int arr[] = {2,4,6,8,10};
    int size = sizeof(arr) / sizeof(arr[1]);

    int sub[] = {1,3,5,7,9};
    int sizeSub = sizeof(sub) / sizeof(sub[1]);

    //concat(arr , &size , sub , sizeSub);
    divArray(arr, &size , 3);
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}

void concat(int array[], int* size , int sub[], int sizeSub){
    for(int i = 0 ; i <= sizeSub - 1; i++){
        array[*size] = sub[i];
        (*size)++;
    }
}
void divArray(int array[], int* size ,int pos){
    int sub[100];
    for(int i = pos ; i <=* size - 1 ; i++){
        sub[i - pos] = array[i];
    }
    (*size) = pos;
}
