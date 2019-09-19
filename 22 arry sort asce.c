#include<stdio.h>

void main()
{
    int arr[5]={122,400,1,12,13},i,t,i1,pass=1;

    printf("Array =>\n\n");
    for (i=0;i<5;i++)
    {
        printf("%7d",arr[i]);
    }
    printf("\n\n");


    for (i1=0;i1<5;i1++)
    {
        for (i=0;i<4;i++)
        {
            if (arr[i1]>arr[i])
            {

                t=arr[i1];
                arr[i1]=arr[i];
                arr[i]=t;
            }
        }
        printf("\n\n Pass: %d  =>",pass);
        pass++;
        for (i=0;i<5;i++)
        {
            printf("%7d",arr[i]);
        }

    }


    printf("\n\n\nBubble Sorted Array =>\n\n");
    for (i=0;i<5;i++)
    {
        printf("%7d",arr[i]);
    }
    printf("\n\n");

}
