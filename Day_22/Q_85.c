#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
     str[strcspn(str, "\n")] = '\0';
  strcpy(rev, str);
   int len = strlen(rev);
 for(int i=0;i<len/2;i++) {
            char temp = rev[i];
        rev[i] = rev[len-1-i];
            rev[len-1-i] = temp;
    }
if(strcmp(str, rev) == 0)
        printf("Palindrome String");
    else
           printf("Not Palindrome");
  return 0;
}