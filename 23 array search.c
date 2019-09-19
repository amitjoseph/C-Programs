#include<stdio.h>

void main()
{
    int arr[5]={122,4,33,12,1},i,s;
    printf("Enter Element to be searched:");
    scanf("%d",&s);
    for (i=0;i<5;i++)
    {
        if (arr[i]==s)
        {
            printf("%d is found at %d position",s,i+1);
        }
    }
}

