#include<stdio.h>

void main()
{
    int arr[5]={122,4,33,12,1},max,min,sum=0,i;
    max=arr[0];
    min=arr[0];

    for (i=0;i<5;i++)
    {
        if (arr[i]>max)
            max=arr[i];
        else
            if (arr[i]<min)
                min=arr[i];
        sum=sum+arr[i];
    }

    printf("Max: %5d Min: %5d Sum: %5d",max,min,sum);
}
