#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void insteadChar(char str[], int pos , char key);
int main()
{
    char str[] = "xin chao ban";
    insteadChar(str , 4 , 'e');
    printf("%s", str);
    return 0;
}

void insteadChar(char str[], int pos , char key){
    for(int i = strlen(str) ; i >= pos ; i--){
        str[i + 1] = str[i];
    }
    str[pos] = key;
}
