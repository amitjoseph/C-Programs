#include<stdio.h>
#include<malloc.h>

struct node
{
    int num;
    struct node *next;
};

void addatbeg(struct node **startptrptr, int elem)
{
    struct node *nnodeptr;
    nnodeptr=(struct node *)malloc(sizeof(struct node));
    nnodeptr->num=elem;

    nnodeptr->next=*startptrptr;
    (*startptrptr)=nnodeptr;
}

void traverse(struct node *rider)
{if (rider!=NULL){
    while(rider!=NULL)
    {
        printf("%5d |", rider->num);
        rider=rider->next;
    }
}
else
    printf("   Empty!");
    printf("\n");
}
void display(struct node *hash[])
{
    printf("\n---------- HASH TABLE -----------------\n");
    int i;
    for (i=0;i<5;i++)
    {
        printf("%5d | %9u ->",i,hash[i]);
        traverse(hash[i]);
    }
    printf("---------------------------------------\n");
}

void del(struct node **startptrptr,int i, int elem)
{
    if ((*startptrptr)==NULL)
    {
        printf("\nNo Element Found to be deleted!");

    }
}
void search(struct node *hashptr[],int ele)
{

    int count=0,i=ele%5;
    struct node *rider;
    rider=hashptr[i];
    if (rider!=NULL)
    {
        while (rider->num!=ele)
        {
            rider=rider->next;
            count++;
        }
        if (rider!=NULL)
            printf("\n--------------------\nElement found!\n-Hash table index: %d\n-Position: %d \n=> No of comparsion: %d\n--------------------\n\n",i,count,count+1);
        else
            printf("\n No such Element found!\n");
    }
    else
        printf("\n List Empty!\n");


}

void main()
{
    struct node *hash[5]={NULL,NULL,NULL,NULL,NULL};
    int ch,ele,index;

    while(1)
    {
        printf("Menu---------------- \n1.Add\n2.Search\n3.Display\n4.Input from Array\n\t=> ");
        scanf("%d",&ch);

        if (ch==1)
        {
            printf("\nEnter the element: ");
            scanf("%d",&ele);
            index=ele%5;
            addatbeg(&hash[index],ele);
            display(hash);

        }
        else if (ch==5)
        {
            printf("\nEnter the element: ");
            scanf("%d",&ele);
            index=ele%5;

        }
        else if (ch==2)
        {
            printf("\nEnter the element: ");
            scanf("%d",&ele);
            search(hash,ele);

        }
        else if (ch==3)
        {
            display(hash);
        }
        else if (ch==4)
        {
            int arr[7]={5,7,35,18,50,10,6},i;
            printf("\nThe List is :\n\t");
            for(i=0;i<7;i++)
            {
                printf("%5d ",arr[i]);

            }
            printf("\n");
            for(i=0;i<7;i++)
            {
                index=arr[i]%5;
                addatbeg(&hash[index],arr[i]);
            }
            display(hash);
        }
    }
}
