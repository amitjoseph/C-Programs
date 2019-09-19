#include<stdio.h>

int ifempty(int *top)
{
    if (*top==-1)
        return 1;
    else
        return 0;
}
int pop(int arr[], int *top)
{
    int ele;
    if (*top!=-1)
    {
        ele=arr[*top];
        (*top)--;
        return ele;
    }
    else
        return 0;

}

int push(int arr[],int *top)
{
    int ele=99;
    (*top)++;

    //printf("%d|%d",*top,ele);
    printf("\n");

    int i=*top;
    arr[i]=ele;
    //printf("Check");
    return 0;
}

void display(int arr[],int *top)
{
    int i;
    for (i=0;i<*top+1;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void main()
{
    int arr[30]={12,43,66,3,45},i,top=4;

    for (i=0;i<top+1;i++)
        printf("%d ",arr[i]);

    printf("\n");
    push(&arr,&top);
    int f;
    if (!ifempty(&top))
        f=pop(&arr,&top);
    else
        printf("Stack Empty")
    //printf("===>%d====%d=== ",f,top);

    display(arr,&top);
}
