#include <stdio.h>
#include <stdlib.h>
int sumOfMaxElement(int array[], int size);
int main()
{
    int arr[] = {1,2,10,4,8,6,7};
    int size = sizeof(arr) / sizeof(arr[1]);
    int result = sumOfMaxElement(arr , size);
    printf("%d", result);
    return 0;
}

int sumOfMaxElement(int array[], int size){
   int max = array[0] * array[1];
   for(int i = 0 ; i <= size - 1 ; i++){
        for(int j = i + 1 ; j <= size - 1 ; j++){
            int newMax = array[i] * array[j];
                if(newMax > max){
                    max = newMax;
                }
        }
   }
   return max;
}
