#include<stdio.h>

void main()
{
    int arr[5]={122,400,1,12,13},i,j,t,pass,sc;

    printf("Array =>\n\n");
    for (i=0;i<5;i++)
    {
        printf("%7d",arr[i]);
    }
    printf("\n\n");


    for (pass=0;pass<5;pass++)
    {
        sc=0;
        for (i=0;i<5-1-pass;i++)
        {
            if (arr[i]>arr[i+1])
            {
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
                sc++;
            }
        }
        if (sc==0)
            break;
        printf("\n\n Pass: %d  =>",pass+1);

        for (j=0;j<5;j++)
        {
            printf("%7d",arr[j]);
        }

    }


    printf("\n\n\nBubble Sorted Array =>\n\n");
    for (i=0;i<5;i++)
    {
        printf("%7d",arr[i]);
    }
    printf("\n\n");

}
