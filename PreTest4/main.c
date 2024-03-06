#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Viết hàm nhận vào str(1 chuỗi - string),  key(trong đó key là ký tự), Hàm có nhiệm vụ tìm vị trí phát hiện key trong chuỗi.
- nếu tìm được return vị trí, nếu không tìm được return -1
-------------------------mô tả
arr: "xin chao ban"     key: c               arr: "xin chao ban"      key: e
hàm trả về 4                                          hàm trả về  -1
*/
int findIndex(char str[], char key);
int main()
{
    char str[100];
    printf("\nNhap chuoi di: ");
    gets(str);

    char key;
    printf("\nNhap key di: ");
    scanf("%c", &key);
    int pos = findIndex(str , 'c');
    printf("\nVi tri cua key ne: ");
    printf("%d", pos);
    return 0;
}

int findIndex(char str[], char key){
    int size = strlen(str);
    for(int i = 0 ; i <= size - 1 ; i++){
        if(str[i] == key){
            return i;
        }
    }
    return -1;
}
