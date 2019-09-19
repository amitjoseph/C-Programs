#include<stdio.h>
void printarr(int *arr)
{
    int i;
    printf("\nThe array is:\n");
    for(i=0; i<10; i++)
        printf("%5d",arr[i]);
}
void swap(int *arr,int l,int r)
{
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}
void findpos(int *arr,int left,int right)
{
    int l=left,r=right,pivot=arr[left];
    while(l<r)//for the first position
    {
        while(arr[r]>pivot)
            r--;
        //printf("\n r is %d",r);
        swap(arr,l,r);
        while(arr[l]<pivot)
            l++;
        //printf("\n l is %d",l);
        swap(arr,l,r);
    }
    //printarr(arr);
    if(l-left>1)
        findpos(arr,left,l-1);
    if(right-r>1)
        findpos(arr,r+1,right);
}
void main()
{
    int arr[10]= {56,34,23,89,76,345,22,10,140,60};
    printarr(arr);
    findpos(arr,0,9);
    printarr(arr);
}
