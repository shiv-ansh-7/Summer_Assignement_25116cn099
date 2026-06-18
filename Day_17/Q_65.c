#include <stdio.h>
int main() {
    int n,arr[n],duplicate=0;

 printf("Enter size: ");
    scanf("%d",&n);
printf("Enter elements: ");
 for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);
 printf("Array after removing duplicates:\n");
 for(int i=0;i<n;i++){
  for(int j=0;j<i;j++){
 if(arr[i]==arr[j])
         duplicate=1;
 }

        if(!duplicate)
            printf("%d ",arr[i]);
    }

    return 0;
}