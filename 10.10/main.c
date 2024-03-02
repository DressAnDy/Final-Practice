#include <stdio.h>
#include <stdlib.h>
int checkPrime(int n);
void prime(int array[], int* size);
int main() {
    int array[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    prime(array, &size);

    printf("Mang sau khi loai bo cac so khong phai la so nguyen to: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void prime(int array[], int* size){
    int sizeTmp = 0;
    int tmp[*size];
    for(int i = 0 ; i <=* size - 1 ; i++){
        if(checkPrime(array[i])){
            tmp[sizeTmp] = array[i];
            sizeTmp++;
        }
    }
    for(int i = 0 ; i <= sizeTmp - 1 ; i++){
        array[i] = tmp[i];
    }
    (*size) = sizeTmp;
}




int checkPrime(int n){
    if(n >= 2){
        for(int i = 2 ; i <= n - 1; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
