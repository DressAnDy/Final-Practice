#include <stdio.h>
#include <stdlib.h>
int sumOfArray(int array[], int size);
int main()
{
    int arr[] = {1,3,5,7,8};
    int size = sizeof(arr) / sizeof(arr[1]);
    int result = sumOfArray(arr, size);
    printf("%d", result);

    float trungBinhCong = (float)result / size;
    printf("\n%.02f", trungBinhCong);
    return 0;
}

int sumOfArray(int array[], int size){
    int sum = 0;
    for(int i = 0 ; i <= size - 1 ; i++){
        sum += array[i];
    }
    return sum;
}

