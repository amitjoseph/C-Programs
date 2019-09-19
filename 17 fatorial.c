#include<stdio.h>

void main()
{
    int n,f=1,i;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;

    }
    printf("The fatorial of %d is %d",n,f);
}
