#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10]={30,40,10,20,70,50,60},i,p,nel=99;

    printf("Array before insertion:\n\n");
    for(p=0;p<7;p++) //Printing
    {
        printf("%5d",arr[p]);
    }

    printf("\n\nProcess:\n\n");
    for(p=6;p>=3;p--) //Moving Elements
    {
        arr[p+1]=arr[p];

        for(i=0;i<=7;i++) //Printing
        {
            printf("%5d",arr[i]);
        }
        printf("\n\n");
        getch();

    }

    arr[3]=nel; //New Element


    printf("\nArray after insertion:\n\n");
    for(p=0;p<=7;p++) //Printing
    {
        printf("%5d",arr[p]);
    }
    printf("\n\n\n\n");
}
