#include <stdio.h>
#include <stdlib.h>
int arrInArr(int array[], int size , int sub[], int sizeSub);
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8}; //pos: 2 amount: 3
    int size = sizeof(arr) / sizeof(arr[1]);

    int sub[] = {4,5,6};
    int sizeSub = sizeof(sub) / sizeof(sub[1]);

    int result = arrInArr(arr , size , sub , sizeSub);
    printf("%d", result);
    return 0;
}
int arrInArr(int array[], int size , int sub[], int sizeSub){
    for(int i = 0 ; i <= size - 1 ; i++){
        if(array[i] == sub[0]){
            for(int j = 0 ; j <= sizeSub - 1 ; j++){
                if(array[i + j] != sub[j]) break;
                else{
                    if(j == sizeSub - 1){
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}
