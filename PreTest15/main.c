#include <stdio.h>
#include <stdlib.h>
void insteadArray(int array[], int* size ,
                  int sub[], int sizeSub ,int pos);
int main()
{
    int arr[] = {9,8,7,3,2,1};
    int size = sizeof(arr) / sizeof(arr[1]);

    int sub[] = {6,5,4};
    int sizeSub = sizeof(sub) / sizeof(sub[1]);
    insteadArray(arr , &size , sub , sizeSub , 3);

    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}
void insteadArray(int array[], int* size ,
                  int sub[], int sizeSub ,int pos){
    for(int i =* size - 1 ; i >= pos ; i--){
        array[i + sizeSub] = array[i];
    }
    for(int i = 0 ; i <= sizeSub - 1 ; i++){
        array[i + pos] = sub[i];
    }
    (*size) += sizeSub;
}
