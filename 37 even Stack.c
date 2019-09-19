#include<stdio.h>

int push(int arr[],int *top)
{
    int ele;
    printf("Enter the value top be pushed:");
    scanf("%d",&ele);
    (*top)++;
    arr[*top]=ele;
    return 0;
}
int display(int arr[],int top)
{
    int i;
    //printf("\n|-----------|\n| pos | ele |\n|-----------|\n");
    for(i=5;i>=0;i--)
    {
        if (i==top)
            printf(" %1d->\t%3d\n",i,arr[i]);
        else
            printf("   \t%3d\n",arr[i]);
    }
    printf("\n\n");
    return 0;
}

int pop(int arr[],int *top)
{
    int ele;
    ele=arr[*top];
    (*top)--; //Decrement top by 1
    return ele;

}

void main()
{
    int arr[5]={12,66,2,34},top=3,i;

    display(arr,top);
    push(arr,&top);
    display(arr,top);
    pop(arr,&top);
    display(arr,top);



}
