#include<stdio.h>
int main() {
    int n,i,arr[n];

    printf("enter the size of array");
    scanf("%d", &n);
printf("enter the element");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];
          int second =arr[0];
    for(i=0; i<n; i++) {
        if(arr[i]>largest) {
            second=largest;
            largest=arr[i];
        }
             else if(arr[i]>second && arr[i]!=largest) {
            second=arr[i];
        }
    }
    
    printf("Second largest element is %d\n", second);
    return 0;
}