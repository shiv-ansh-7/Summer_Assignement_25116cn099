#include<stdio.h>
int main (){
    int arr[100],n,i,first ;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    first =arr[0];
    for(i=0;i<n-1;i++){
        arr[i]=arr [i+1];

    }
    arr [n-1]=first;
    printf("array after rotation");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);

    }return 0;
}