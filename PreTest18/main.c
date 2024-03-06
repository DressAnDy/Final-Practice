#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void deleteDuplication(char str[]);
int checkExsit(char ch);
int main()
{
    char str[] = "anBanhKemAnVui";
    deleteDuplication(str);
    printf("%s", str);
    return 0;
}
void deleteDuplication(char str[]) {
    char tmp[100] = {0}; // Initialize tmp array with zeroes
    int sizeTmp = 0;
    int size = strlen(str);

    for (int i = 0; i <= size - 1; i++) {
        int found = 0;
        for (int j = 0; j <= sizeTmp - 1; j++) {
            if (str[i] == str[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            tmp[sizeTmp] = str[i];
            sizeTmp++;
        }
    }
    for (int i = 0; i < sizeTmp; i++) {
        str[i] = tmp[i];
    }
    str[sizeTmp] = '\0';
}
