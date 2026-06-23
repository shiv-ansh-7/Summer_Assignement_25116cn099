#include <stdio.h>

int main() {
 char str[100];
 printf("Enter string: ");
 scanf("%[^\n]", str);
 for(int i=0; str[i]!='\0'; i++) {
 for(int j=i+1; str[j]!='\0'; j++) {
    if(str[i]==str[j]) {
     printf("First repeating character = %c", str[i]);
       return 0;
            }
        }
    }
printf("No repeating character");
 return 0;
}