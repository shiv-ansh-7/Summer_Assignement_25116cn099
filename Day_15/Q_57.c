#include<stdio.h>
int main (){
    int arr[100],n,i,temp;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("the reversed array is: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}