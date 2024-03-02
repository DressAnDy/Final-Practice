#include <stdio.h>
#include <stdlib.h>
void splice(int array[], int* size , int pos , int amount);
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[1]);

    splice(arr, &size , 2 , 3);

    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}

void splice(int array[], int* size ,
                 int pos , int amount){
    for(int i = pos ; i <=* size - 1 ; i++){
        array[i] = array[i + amount];
    }
    (*size) -= amount;
}
