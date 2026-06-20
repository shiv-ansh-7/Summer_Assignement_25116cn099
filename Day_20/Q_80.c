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
      printf(" column wise sum ");
for (j=0;j<r;j++){
    int sum =0;

for (i=0;i<c;i++){
    sum+= a[i][j];
}
 printf("column %d sum = %d\n ",i+1,sum);
}
return 0;
}

