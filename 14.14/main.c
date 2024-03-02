#include <stdio.h>
#include <stdlib.h>
void addArrToArr(int array[], int* size , int sub[], int sizeSub , int pos);
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[1]);

    int sub[] = {7,8,9};
    int sizeSub = sizeof(sub) / sizeof(sub[1]);

    addArrToArr(arr , &size , sub , sizeSub , 3);

    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}
void addArrToArr(int array[], int* size,
                 int sub[], int sizeSub,
                 int pos) {
    for(int i = *size - 1; i >= pos; i--) {
        array[i + sizeSub] = array[i];
    }
    for(int i = 0; i < sizeSub; i++) {
        array[pos + i] = sub[i];
    }
    (*size) += sizeSub;
}
