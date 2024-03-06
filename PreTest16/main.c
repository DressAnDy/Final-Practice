#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void deleteStr(char str[], int pos);
void spilice(char str[], int pos , int amount);
int main()
{
    char str[] = "xin chao ban";
    deleteStr(str , 4);
    printf("%s", str);
    return 0;
}
void deleteStr(char str[], int pos){
    for(int i = 0 ; i <= strlen(str); i++){
        if(i == pos){
            spilice(str , i , 1);
        }
    }
}
void spilice(char str[], int pos , int amount){
    for(int i = pos ; i <= strlen(str) - 1 ; i++){
        str[i] = str[i + amount];
    }
    //amount = size - pos >= amount ? amount : size - pos;
}
