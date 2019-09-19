#include<stdio.h>
void main()
{
    int arr[5]={11,20,9,20,11},i,flag=0;

    for (i=0;i<5/2;i++)
    {
        if (arr[i]!=arr[5-1-i])
            flag=1;
    }

   if (flag==0)
       printf("Array is a palarray!");
   else
       printf("Not a palarray!");
}

