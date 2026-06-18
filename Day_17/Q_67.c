#include <stdio.h>

int main() {
 int n1,n2,a[n1], b[n2], found=0;

    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n2);
for(int i=0;i<n2;i++)
        scanf("%d",&b[i]);
for(int i=0;i<n1;i++)
            printf("%d ",a[i]);

    for(int i=0;i<n2;i++){

    for(int j=0;j<n1;j++){
  if(b[i]==a[j])
     found=1;
        }

        if(!found)
            printf("%d ",b[i]);
    }

    return 0;
}