#include <stdio.h>
#include <stdlib.h>
int compareArray(int array[], int size,  int sub[], int sizeSub);
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[1]);

    int sub[] = {1,2,3,4,5};
    int sizeSub = sizeof(sub) / sizeof(sub[1]);

    int check = compareArray(arr , size , sub , sizeSub);

    if(check == 1){
        printf("\nArr la mang lon");
    }else if(check == -1){
        printf("\nSub la mang lon");
    }else{
        printf("\nHai mang bang nhau");
    }
    return 0;
}

int compareArray(int array[], int size , int sub[], int sizeSub){
    for(int i = 0 ; i <= size - 1 ; i++){
        if(array[i] > sub[i]){
            return 1;
        }else if(array[i] < sub[i]){
            return -1;
        }
    }
    if(size > sizeSub){
        return 1;
    }else if(size < sizeSub){
        return -1;
    }
    return 0;
}
