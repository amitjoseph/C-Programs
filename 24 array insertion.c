#include<stdio.h>

void main()
{
    int arr[10]={122,400,1,12,13},i,a,p;


    for (i=0;i<5;i++)
    {
        printf("%7d",arr[i]);
    }


    printf("\n\nEnter Element and its position:");
    scanf("%d%d",&a,&p);
    p--;
    for (i=4;i>=p;i--)
    {
            arr[i+1]=arr[i];
    }
    arr[p]=a;
    for (i=0;i<6;i++)
    {
        printf("%7d",arr[i]);
    }
}

