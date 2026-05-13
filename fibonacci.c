#include <stdio.h>
#include <time.h>
int main()
{
    int i,n;
    clock_t start,end;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    
    int fib[100];
    start=clock();
     fib[0]=0;
     fib[1]=1;
    
    for (i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    end=clock();
    for(i=0;i<n;i++)
    {
        printf("%d \t",fib[i]);
    }
    printf("\n");
    double time_taken =((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken for fib is:%f",time_taken);
}
