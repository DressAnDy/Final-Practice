#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
/*
Viết hàm nhận vào 1 mảng số nguyên, pos, amount (trong đó pos và amount là 2 số nguyên),
Hàm có nhiệm vụ xóa amount phần tử trong mảng từ vị trí pos
-------------------------mô tả
arr: 2 0 1 4 3 6 5 7 9     pos: 2       amount: 5
arr có kết quả sau hàm là 2 0 7 9
*/
int splice(int array[], int* size , int pos , int amount);
void outputArray(int array[], int size);
void inputArray(int array[], int* size);
int main()
{
    int arr[MAX];
    int size = sizeof(arr) / sizeof(arr[1]);
    inputArray(arr , &size);
    int pos;
    printf("\nNhap pos: ");
    scanf("%d", &pos);

    int amount;
    printf("\nNhap amount: ");
    scanf("%d", &amount);

    splice(arr , &size , pos , amount);
    outputArray(arr , size);
    return 0;
}
int splice(int array[], int* size , int pos , int amount){
    if(pos < 0 || pos > size) return -1;
    for(int i = pos ; i <=* size - 1; i++){
        array[i] = array[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    (*size) -= amount;
    return 1;
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

