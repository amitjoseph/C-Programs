#include<stdio.h>
void main()
{
    int arr[5]={45,66,11,84,23},i,t;

    for (i=0;i<5/2;i++)
    {
        t=arr[i];
        arr[i]=arr[5-1-i];
        arr[5-1-i]=t;
    }

    for (i=0;i<5;i++)
    {
        printf("%5d",arr[i]);
    }
}
