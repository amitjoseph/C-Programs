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
    int ele;
    printf("Enter Element to be pushed: ");
    scanf("%d",&ele);
    (*top)++;
    arr[*top]=ele;
    return 0;
}

void display(int arr[],int *top)
{
    int i;
    for (i=0;i<*top+1;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void displayall(int arr[],int *top)
{
    int i;
    for (i=5;i>=0;i--)
    {
        if (*top==i)
            printf("|=>%6d|%15d|<=\n",i,arr[i]);
        else
            printf("|%8d|%15d|\n",i,arr[i]);
    }
    printf("\n");
}
void main()
{   int stk[5],top=-1;
    int loop=1,ch,poped;
    while (loop==1)
    {
        printf("\n\nMenu\n");
        printf("1  - Push\n");
        printf("2  - Pop\n");
        printf("3 - Exit\n\n");
        printf("=>");
        scanf("%d",&ch);
        printf("\n");

        if (ch==1)
        {
            if (top<5)
            {
                push(stk,&top);
                displayall(stk,&top);
            }
            else
            {
                printf("Stack Overflow");
            }

        }
        else if(ch==2)
        {
            //Pop here
            if (!ifempty(&top))
            {

                poped=pop(stk,&top);
                printf("\nPoped Element :%d\n",poped);
                displayall(stk,&top);
            }
            else
                printf("Stack Empty");

        }
        else if(ch==3)
        {
            if (!ifempty(&top))
                displayall(stk,&top);
            else
                printf("Stack Empty");

        }
        else if (ch==3)
        {
            break;
        }
        getch();

    }
}
