#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
/*
Viết hàm nhận vào 1 mảng số nguyên,  key(trong đó key số nguyên), Hàm có nhiệm vụ xóa hết key trong mảng.
--mô tả
arr: 2 1 5 3 4 5 6 5     key: 5
arr sau khi xài hàm : 2 1 3 4 6
*/
int splice(int array[], int* size , int pos , int amount);
void outputArray(int array[], int size);
void inputArray(int array[], int* size);
void deleteElement(int array[], int* size , int key);
int main()
{
    int arr[MAX];
    int size = sizeof(arr) / sizeof(arr[1]);
    inputArray(arr, &size);
    deleteElement(arr , &size , 5);
    outputArray(arr , size);
    return 0;
}

void deleteElement(int array[], int* size , int key){
    int tmp[100];
    int sizeTmp = 0;
    for(int i = 0 ; i <=*size - 1 ;i++){
        if(array[i] != key){
            tmp[sizeTmp] = array[i];
            sizeTmp++;
        }
    }
    (*size) = sizeTmp;
    for(int i = 0 ; i <= sizeTmp - 1 ; i++){
        array[i] = tmp[i];
    }
}

void outputArray(int array[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", array[i]);
    }
}

void inputArray(int array[], int* size){
    printf("\nNhap kich thuoc di: ");
    scanf("%d", size);

    for(int i = 0 ; i <=* size - 1 ; i++){
        printf("\nNhap array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
