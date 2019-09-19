#include<stdio.h>
#include<malloc.h>


struct node
{
    int coeff;
    int pow;
    struct node *next;
};

void addatend(struct node **startptrptr, struct node **endptrptr)
{
    struct node *nnodeptr;
    nnodeptr=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the coeffient :");
    scanf("%d",&nnodeptr->coeff);
    printf("\tPower :");
    scanf("%d",&nnodeptr->pow);
    nnodeptr->next=NULL;

    if ((*startptrptr)==NULL) // First node Case
        (*startptrptr)=(*endptrptr)=nnodeptr;
    else
    {
        (*endptrptr)->next=nnodeptr;
        (*endptrptr)=nnodeptr;
    }
}
void addatend1(struct node **startptrptr, struct node **endptrptr,int ele,int pow)
{

    struct node *nnodeptr;
    nnodeptr=(struct node *)malloc(sizeof(struct node));
    (nnodeptr->coeff)=ele;
    (nnodeptr->pow)=pow;
    nnodeptr->next=NULL;


    if ((*startptrptr)==NULL) // First node Case
        (*startptrptr)=(*endptrptr)=nnodeptr;
    else
    {
        (*endptrptr)->next=nnodeptr;
        (*endptrptr)=nnodeptr;
    }
}


void displayeq(struct node *rider)
{

    while(rider!=NULL)
    {
        printf("%d^%d",rider->coeff,rider->pow);
        if (rider->next!=NULL)
            printf(" + ");
        rider=rider->next;
    }
}


void addeq(struct node *rider1, struct node *rider2,struct node **startptrptr, struct node **endptrptr)
{
    int sum=0;

    while ((rider1!=NULL)&&(rider2!=NULL))
    {
        printf("\n=>");
        displayeq(*startptrptr);
        if ((rider1->pow)==(rider2->pow)) //same power
        {
            sum=rider1->coeff+rider2->coeff;
            addatend1(startptrptr,endptrptr,sum,rider1->pow);
            rider1=rider1->next;
            rider2=rider2->next;
        }
        else if ((rider1->pow)>(rider2->pow))
        {
            addatend1(startptrptr,endptrptr,rider1->coeff,rider1->pow);
            rider1=rider1->next;
        }
        else if ((rider2->pow)>(rider1->pow))
        {
            addatend1(startptrptr,endptrptr,rider2->coeff,rider2->pow);
            rider2=rider2->next;
        }

    }
    while(rider1!=NULL)
    {
        addatend1(startptrptr,endptrptr,rider1->coeff,rider1->pow);
        rider1=rider1->next;
    }
    while(rider2!=NULL)
        {
            addatend1(startptrptr,endptrptr,rider2->coeff,rider2->pow);
            rider2=rider2->next;
        }
}

void main()
{
    struct node *start1=NULL,*end1=NULL,*start2=NULL,*end2=NULL,*start3=NULL,*end3=NULL;
    int n,n1,i;

    printf("Enter the no of terms of the first equation: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        addatend(&start1,&end1);

    printf("Enter the no of terms of the Second equation: ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
        addatend(&start2,&end2);

    printf("\nThe 1st Equation is :\n\t");
    displayeq(start1);
    printf("\nThe 2nd Equation is :\n\t");
    displayeq(start2);

    addeq(start1,start2,&start3,&end3);
    printf("\n\nThe Answer is :\n\t");
    displayeq(start3);
    printf("\n");


}
