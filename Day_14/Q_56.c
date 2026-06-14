#include<stdio.h>
int main(){
    int  n,i,j;
    printf("size of array");
    scanf("%d", &n);
    int arr[n];
    printf("enter the element");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
        printf("duplicate element in array");
    for(i=0; i<n; i++) {    
           for(j=i+1; j<n; j++) {
            if(arr[i]==arr[j]) {
                printf("%d ", arr[i]);
            }
        }
    }
}