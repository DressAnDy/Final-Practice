#include <stdio.h>
#include <stdlib.h>
int giaThua(int n);
int main()
{
    int n;
    printf("\nSap n: ");
    scanf("%d", &n);
    int result = giaThua(n);
    printf("%d", result);
    return 0;
}
int giaThua(int n){
    if(n == 0) return 1;
    int fac = 1;
    for(int i = 1 ; i <= n ; i++){
        fac *= i;
    }
    return fac;
}
