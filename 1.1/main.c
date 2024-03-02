#include <stdio.h>
#include <stdlib.h>
/*
viết hàm tìm phần tử nhỏ nhất trong mảng
*/
int findMinimumElement(int array[], int size);
int main()
{
    int arr[100] = {7,8,2,9,0,1,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = findMinimumElement(arr , size);
    printf("%d", result);
    return 0;
}

int findMinimumElement(int array[], int size){
    int check = array[0];
    for(int i = 0 ; i <= size - 1 ; i++){
        if(array[i] < check){
            check = array[i];
        }
    }
    return check;
}
