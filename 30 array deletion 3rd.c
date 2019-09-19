#include<stdio.h>
void main()
{
    int arr[10]={30,40,10,20,70,50,60},p,delp=3;

    printf("Array before deletion:\n\n");
    for(p=0;p<7;p++) //Printing
    {
        printf("%5d",arr[p]);
    }


    for(p=delp;p<7;p++) //Moving Elements
    {
        arr[p-1]=arr[p];
    }




    printf("\n\n\nArray after deletion:\n\n");
    for(p=0;p<7-1;p++) //Printing
    {
        printf("%5d",arr[p]);
    }
    printf("\n\n\n\n");
}

