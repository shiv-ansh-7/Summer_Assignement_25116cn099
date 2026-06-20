#include <stdio.h>

int main() {
    int r,c,i,j;
    printf("enter the order of matrix ");
    scanf("%d %d", &r,&c);
    int a[r][c];
    printf("enter the marix element");
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
      printf("row wise sum ");
for (i=0;i<r;i++){
    int sum =0;

for (j=0;j<c;j++){
    sum+= a[i][j];
}
 printf("row %d sum = %d\n ",i+1,sum);
}
return 0;
}

