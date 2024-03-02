#include <stdio.h> (làm lại)
#include <stdlib.h>
//43 - delSubInArr
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int splice(int array[] , int* size , int pos , int amount);
int arrInArr(int array[], int size ,
             int arrayS[], int sizeS);

int arrInArrV2(int array[], int size ,
             int arrayS[], int sizeS);
void delSubInArr(int array[], int* size , int sub[] , int sizeS);
int sort(int array[], int size);
int main()
{
    int arr[] = {2,1,1,3,5,3,5,9,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int arrS[] = {1,3,5};
    int sizeS = sizeof(arrS) / sizeof(arrS[0]);
    delSubInArr(arr , &size , arrS , sizeS);
    printf("\nMang vua nhap ne: \n");
    outputArray(arr , size);
    return 0;
}//phía trên là main

void delSubInArr(int array[], int* size , int sub[] , int sizeSub){
    while(splice(array , size , arrInArr(array , *size , sub , sizeSub), sizeSub));
}
int arrInArrV2(int array[], int size ,
             int arrayS[], int sizeS){
    int check = 0;
    for(int i = 0 ; i <= size - 1 ; i++){
        if(array[i] == arrayS[check]){
                if(check == sizeS - 1){
                    return i - check;
                }
            check++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}
int arrInArr(int array[], int size ,
             int arrayS[], int sizeS){
    for(int i = 0 ; i <= size - 1 ; i++){
        if(array[i] == arrayS[0]){
            for(int j = 0 ; j <= sizeS - 1 ; j++){
                if(array[i + j] != arrayS[j]) break;
                else{
                    if(j == sizeS - 1){ //chạy tới khi nào so sánh tới vị trí cuối cùng
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}
int splice(int array[] , int* size , int pos , int amount){
    if(pos < 0 || pos >=* size || amount < 0){
        return 0;
    }
    for(int i = pos ; i <=* size - 1; i++){
        array[i] = array[i + amount];
    }
    (*size) -= amount;
    return 1;
}
void inputArray(int array[], int* size){
    printf("\nNhap kich thuoc di: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nNhap array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", array[i]);
    }
}
