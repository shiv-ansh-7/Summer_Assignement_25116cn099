#include <stdio.h>
#include <string.h>

int main() {

    int n;

    printf("Enter number of name");
    scanf("%d",&n);
char names[n][50],temp[50]; 
    getchar();
 for(int i=0;i<n;i++){
        printf("Enternamw %d: ",i+1);
        fgets(names[i],50,stdin);
    }
 for(int i=0;i<n-1;i++){
   for(int j=i+1;j<n;j++){
      if(strcmp(names[i],names[j])>0){
                  strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
           strcpy(names[j],temp);
            }
        }
    }

    printf("\nSorted Names:\n");
    for(int i=0;i<n;i++)
        printf("%s",names[i]);

    return 0;
}