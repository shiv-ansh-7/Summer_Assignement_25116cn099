#include <stdio.h>
int main() {
    int n,i,key,found=0;
        int arr[n];
    printf("Enter the number of element ");
    scanf("%d", &n);

    printf("Enter the element");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be search");
    scanf("%d", &key);
    for(i=0; i<n; i++) {   
        if (arr[i]==key) {
            printf("Element found atindex %d", i+1);
            found=1;
            break;
        }
        
        if(found==0) {
            printf("Element not found");
        }
    }
        
    return 0;
}
