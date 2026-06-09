#include<stdio.h>
int main()
{
    int x,n;
    long long result = 1;
    printf("Enter the base number: ");
    scanf("%d", &x);
    printf("Enter the exponent: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        result *= x;
    }
    printf("Result: %lld\n", result);
    return 0;
}