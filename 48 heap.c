#include<stdio.h>
void printheap(int heap[],int pos)
{
    int p;
    printf("\n\n| ");
    for(p=1;p<pos;p++)
        printf("%4d |",heap[p]);
    printf("\n");
}
void addheap(int heap[],int elem,int pos)
{   int par,child;
    if(pos==1)
    {
        heap[1]=elem;
        return;
    }
    else
    {   par=pos/2;
        child=pos;
        while(par>=1)
        {
            if(heap[par]<elem)
            {
                heap[child]=heap[par];
                child=par;
                par=par/2;
            }
            else
                break;
        }
        heap[child]=elem;
    }
}
void heapify(int heap[],int *size)
{
    int arr[11],pos;
    for(pos=1;pos<=(*size);pos++)
    {
        arr[pos]=heap[pos];
    }
    for(pos=1;pos<=(*size)-1;pos++)
    {
        addheap(heap,arr[pos],pos);
        printheap(heap,pos);
    }

}
int delheap (int heap[],int *size)
{
    int poped=heap[1];int i;
    printf("Poped Item :%d",poped);
    (*size)--;
    for(i=2;i<=(*size);i++)
    {
        heap[i-1]=heap[i];
    }
    //printheap(heap,*size);
    getch();
    heapify(heap,size);
    return poped;
}

void main()
{
    int ch,ele;
    int arr[11]={0,73,24,65,13,37,43,57,61,53,34},heap[11],pos=1;
    /*for(pos=1;pos<=10;pos++)
    {
        addheap(heap,arr[pos],pos);

    }
    printheap(heap,pos);
    */
    printf("-- MENU --\n 1. ADD 2. Delete\n");
    while(1)
    {
        printf("\nEnter Choice : ");
        scanf("%d",&ch);
        //ch=1;

        if (ch==1)
        {
            printf("\nEnter Element :");
            scanf("%d",&ele);
            addheap(heap,ele,pos);
            pos++;
            printheap(heap,pos);
        }
        if (ch==2)
        {
            ele=delheap(heap,&pos);
            //printf("%5d |",ele);
            printheap(heap,pos);
        }
    }
}

