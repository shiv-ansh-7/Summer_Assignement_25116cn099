#include<stdio.h>
int main (){
    int n, i, key, count=0;
    printf("Enter the number of element ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element");
    for(i=0; i<n; i++) {
         scanf("%d", &arr[i]);
    }
       printf("Enter the element to be searched");
    scanf("%d", &key);
        for(i=0; i<n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }
    printf("Element found %d times", count);
    return 0;
}