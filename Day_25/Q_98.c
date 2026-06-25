#include <stdio.h>
#include <string.h>

int main() {
    char str1[100],str2[100];

    printf("Enter first string");
    fgets(str1,100,stdin);
  printf("Enter second strin");
    fgets(str2,100,stdin);
    printf("Common characters");
    for(int i=0; str1[i]!='\0'; i++) {
        for(int j=0; str2[j]!='\0'; j++) {
            if(str1[i]==str2[j] && str1[i]!=' ') {
                    printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}