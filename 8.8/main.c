#include <stdio.h>
#include <stdlib.h>
int checkPrime(int n);
int sumOfPrimeArray(int array[], int size);
int sumOfEven(int array[], int size);
int main()
{
    int arr[] = {1,8,9,3,5,7,11,12};
    int size = sizeof(arr) / sizeof(arr[1]);
    int result = sumOfPrimeArray(arr, size);
    printf("%d", result);

    int sum = sumOfEven(arr , size);
    printf("\n%d", sum);
    return 0;
}
int sumOfPrimeArray(int array[], int size){
    int sum = 0;
    for(int i = 0 ; i <= size - 1 ; i++){
        if(checkPrime(array[i])){
            sum += array[i];
        }
    }
    return sum;
}

int sumOfEven(int array[], int size){
    int sum = 0;
    for(int i = 0 ; i <= size - 1 ; i++){
        if(checkEven(array[i])){
            sum += array[i];
        }
    }
    return sum;
}

int checkPrime(int n){
    if(n >= 2){
        for(int i = 2 ; i <= n - 1 ; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int checkEven(int n){
    if(n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
