#include <stdio.h>

int main() {
    int n1, n2;
 printf("Enter size of array ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter sorted elements of first array:\n");
    for(int i=0;i<n1;i++)
        scanf("%d",&a[i]);
   printf("Enter size ofarray: ");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter sorted elements of second\n");
    for(int i=0;i<n2;i++)
        scanf("%d",&b[i]);

    int merged[n1 +n2];

    int i=0,j=0,k=0;

    while(i<n1 && j<n2){
        if(a[i]<b[j])
            merged[k++ ]=a[i++];
        else
            merged[k++ ]=b[j++];
    }

    while(i<n1)
        merged[k++]=a [i++];

    while(j<n2)
        merged[k++]  =b[j++];

    printf("Merged Array:\n");

    for(i=0;i<n1+n2; i++)
        printf("%d ",merged[i]);

    return 0;
}