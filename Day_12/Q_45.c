#include<stdio.h>
int palindrome(int n)
{
    int rev=0,temp =n;
    while 
    (temp >0){
        rev = rev*10 + temp%10;
        temp = temp/10;
    }return (rev==n);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (palindrome(n) )
        printf("%d is a palindrome number.", n);
    else
        printf("%d is not a palindrome number.", n);
    return 0;
}