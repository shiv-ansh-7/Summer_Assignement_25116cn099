#include <stdio.h>

int main() {
    int n ,arr[n] , maxFreq=0,  count=1,element;
 printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
   for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }
if(count>maxFreq){
            maxFreq=count;
            element=arr[i];
        }
    }

    printf("Maximum frequency element = %d",element);
 return 0;
}