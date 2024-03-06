#include <stdio.h>
#include <stdlib.h>
int sumOfElement(int n);
int main()
{
    int n;
    printf("\nNhap n di: ");
    scanf("%d", &n);
    int result = sumOfElement(n);
    printf("%d", result);
    return 0;
}
int sumOfElement(int n){
    int sum = 0;
    int reverse = 0;
    while(n != 0){
        reverse = n % 10;
        sum += reverse;
        n /= 10;
    }
    return sum;
}
