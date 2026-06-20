#include <stdio.h>

int main() {
    int n,i,j,flag =1;
    printf("enter the order of matrix ");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the marix element");
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
      for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        if(a[i][j] != a[j][i]){
            flag =0;
            break;
        }
      }
    }
    if(flag)
printf("matrix is symm.");
else
printf("matrix is not symm.");
    return 0;
}