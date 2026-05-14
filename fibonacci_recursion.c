#include <stdio.h>
#include <time.h>
int fib(int n)
{
    if(n==0)
        return 0;
    if (n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n,i;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Fib series:");
    for(i=0;i<n;i++)
    {
        printf(" %d",fib(i));
    }
}
