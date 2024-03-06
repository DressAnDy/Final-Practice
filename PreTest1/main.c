#include <stdio.h>
#include <stdlib.h>
float sumOfDiv(int n);
int main()
{
    float result;
    int n;
    printf("\nNhap n di: ");
    scanf("%d", &n);

    result = sumOfDiv(n);
    printf("%.03f", result);
    return 0;
}
float sumOfDiv(int n){
    float sum = 0;
    for(int i = 1 ; i <= n ; i++){
        sum += (float) 1 / i;
    }
    return sum;
}
