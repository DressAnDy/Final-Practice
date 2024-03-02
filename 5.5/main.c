#include <stdio.h>
#include <stdlib.h>
void sortArray(int array[], int size);
void outputArray(int array[], int size);
int main()
{
    int arr[] = {1,6,7,10,11,19,15,12};
    int size = sizeof(arr) / sizeof(arr[1]);

    sortArray(arr , size);
    outputArray(arr , size);
    return 0;
}
void sortArray(int array[], int size){ //sort tang dan
    for(int i = 0 ; i <= size - 2 ; i++){
        for(int j = i + 1 ; j <= size - 1; j++){
            if(array[i] > array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

}
/*
void sortArray(int array[], int size){
    for(int i = 0 ; i <= size - 2 ; i++){
        for(int j = i + 1 ; j <= size -1 ; j++){
            if(array[i] < array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp
            }
        }
    }
}
*/
void outputArray(int array[], int size){
    for(int i = 0 ; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
