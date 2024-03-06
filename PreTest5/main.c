#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Viết hàm nhận vào  str(1 chuỗi - string),  Hàm có nhiệm vụ xóa hết  các dấu cách bị thừa có  trong chuỗi.
--mô tả;
str: "    xin    chao    ban    "
str sau khi xài hàm: "xin chao ban"
*/
int  trim(char str[]);
void splice(char str[] , int pos , int amount);
int main()
{
    char str[100];
    printf("\nNhap chuoi de: ");
    gets(str);
    int count = trim(str);

    printf("\nChuoi sau khi xoa: ");
    printf("%s", str);
    printf("\nSo luong da xoa: %d", count);
    return 0;
}

int trim(char str[]){
    int count = 0;
    for(int i = 0 ; i <= strlen(str) - 2; i++){
        if(str[i] == ' ' && str[i] == str[i + 1]){
            splice(str , i , 1);
            i--;
            count++;
        }
    }
    if(str[0] == ' ') splice(str , 0 , 1);
    if(strlen(str) - 1 == ' ') splice(str , strlen(str) , 1);
    return count;
}
void splice(char str[] , int pos , int amount){
    if(pos < 0 || pos > strlen(str)) return -1;
    for(int i = pos ; i <= strlen(str) - 1 ; i++){
        str[i] = str[i + amount];
    }
    amount = strlen(str) - pos >= amount ? amount :strlen(str) - pos;
}
