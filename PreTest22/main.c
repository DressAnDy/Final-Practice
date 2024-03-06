#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void splice(char str[], int pos , int amount);
int main()
{
    char str[100] = "xin chao ban";
    splice(str , 4 ,3);
    printf("%s", str);
    return 0;
}
void splice(char str[], int pos , int amount){
    int size = strlen(str);
    for(int i = pos ; i <= strlen(str) - 1 ; i++){
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
}
