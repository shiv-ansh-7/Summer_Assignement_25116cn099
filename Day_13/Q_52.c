#include<stdio.h>
int main(){
     int arr[100],n,i,evenCount=0,oddCount=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    printf("The number of even elements  %d\n", evenCount);
    printf("The number of odd element %d\n", oddCount);
    return 0;
}