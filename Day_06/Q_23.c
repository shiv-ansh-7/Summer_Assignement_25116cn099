#include<stdio.h>
int main()
{long long binary;
    int count=0;
    printf("Enter a binary number: ");  
    scanf("%lld", &binary);

    while(binary > 0){

    
     if (binary % 10 == 1)
        count++;
        binary/=10;
}printf("number of set bits =%d\n",count);
    return 0;

}