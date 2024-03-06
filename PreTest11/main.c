#include <stdio.h>
#include <stdlib.h>
void changeChar(char str[], char key);
void splice(char str[], int pos , int amount);
int main()
{
    char str[] = "anBanhKemAnvui";
    changeChar(str , 'a');
    printf("%s", str);
    return 0;
}
void changeChar(char str[], char key){
    for(int i = 0 ; i <= strlen(str) - 1 ; i++){
        if(str[i] == key){
            splice(str , i , 1);
        }
    }
}

void splice(char str[], int pos , int amount){
    for(int i = pos ; i <= strlen(str) - 1 ; i++){
        str[i] = str[i + amount];
    }
}
