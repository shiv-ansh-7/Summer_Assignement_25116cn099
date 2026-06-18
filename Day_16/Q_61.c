#include<stdio.h>
int main(){
    int n,i,sum=0,total=0,missing;
    int arr[n-1];

    printf("enter no ");
    scanf("%d",&n);
printf("enter %d element ",n-1);
for(i=0;i<n-1;i++){
scanf("%d",&arr[i]);
sum=sum +arr[i];

}
total =n*(n+1)/2;
missing + total-sum;
printf("mssing number =%d",missing);
return 0;
}
