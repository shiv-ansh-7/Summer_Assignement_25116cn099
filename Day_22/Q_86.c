#include <stdio.h>

int main() {
    char str[200];
    int words = 1;
 printf("Enter sentenc");
    fgets(str, sizeof(str), stdin);
 for(int i=0; str[i]!='\0'; i++) {
        if(str[i]==' ')
            words++; }
 printf("Total words = %d", words);

    return 0;
}