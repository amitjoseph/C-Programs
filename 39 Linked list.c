#include<stdio.h>
#include<malloc.h>
struct node
{
    int num;
    struct node *next;
};

void display(struct node **start,struct node **end)
{

    struct node *rider;
    rider=(struct node*)malloc(4);
    rider=*start;
    while (rider!=NULL)
    {
        printf("%3d|",rider->num);
        rider=rider->next;
    }
}

addatend(struct node **start,struct node **end)
{
    struct node *nnodeptr;
    nnodeptr=(struct node*)malloc(4);


}
void main()
{ /*
    printf("\n\nMenu\n");
    printf("1  - Insert Begining \n");
    printf("2  - Insert End \n");
    printf("3  - Insert After \n");
    printf("4  - Insert Before \n");
    printf("5  - Delete Num \n");
    printf("6  - Delete Begining \n");
    printf("10 - Exit\n\n"); */

    struct node *start,*end,*nnodeptr;

    nnodeptr=(struct node*)malloc(4);
    //scanf("%d",&nnodeptr->num);
    nnodeptr->num=34;
    nnodeptr->next=NULL;
    start=nnodeptr;
    end=nnodeptr;

    display(&start,&end);

}

