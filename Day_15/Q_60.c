#include<stdio.h>
int main (){
    int arr[100],n,i,j=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i+0; i<n;i++){
        if (arr[i] !=0){
            arr[j++] = arr [i];

        }     
    }
    while (j<n){
        arr [ j++] =0;

    }
    printf("arrey after zero");
    for (i=0;i<n;i++){
        printf("%d",arr[i]);

    }
    return 0;
}
