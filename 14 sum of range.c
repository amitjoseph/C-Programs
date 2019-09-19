#include<stdio.h>

void main()
{

    int r=100,range=120,num,dig,sum;
    printf("Enter the limits:");
    scanf("%d,%d",&r,&range);
    for (;r<=range;r++)
    {
        num=r;
        sum=0;
        for (;num>0;num=num/10)
        {
            dig=num%10;
            sum=sum+dig;
        }
        printf("%d |\t %d\n",r,sum);
    }
}
