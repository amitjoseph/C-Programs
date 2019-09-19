#include<stdio.h>

void main()
{
    int arr[5]={122,400,1,12,13},i,t;

    printf("\n Before The 1st Pass: \n");
    for (i=0;i<5;i++)
    {
        printf("%7d",arr[i]);
    }

    for (i=0;i<5-1;i++)
    {
        if (arr[i]>arr[i+1])
        {

            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
    }
    printf("\n\n After The 1st Pass: \n");
    for (i=0;i<5;i++)
    {
        printf("%7d",arr[i]);
    }
    printf("\n\n");
}
