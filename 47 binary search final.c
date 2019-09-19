#include<stdio.h>
#include<malloc.h>
struct node
{
    struct node *rchild;
    int num;
    struct node *lchild;
};
void inorderdisplay(struct node *rider)
{
    if(rider==NULL)
    {
        return;
    }

    inorderdisplay(rider->lchild);
    printf("%5d |",rider->num);
    inorderdisplay(rider->rchild);

}
void preorderdisplay(struct node *rider)
{
    if(rider==NULL)
    {
        return;
    }
    printf("%5d |",rider->num);
    preorderdisplay(rider->lchild);

    preorderdisplay(rider->rchild);

}
void postorderdisplay(struct node *rider)
{
    if(rider==NULL)
    {
        return;
    }

    postorderdisplay(rider->lchild);

    postorderdisplay(rider->rchild);
    printf("%5d |",rider->num);
}
int findpar(struct node *root,int elem)
{
    struct node *par,*child;
    par=root;
    if(elem<par->num)
        child=par->lchild;
    else
        child=par->rchild;
    while(child!=NULL)
    {
        if(child->num<elem)
        {
            par=child;
            child=child->rchild;
        }
        else
        {
            par=child;
            child=child->lchild;
        }
    }
    return(par);
}
void addnode1(struct node *par,int elem)
{
    struct node *nnodeptr=(struct node *)malloc(sizeof(struct node));
    nnodeptr->num=elem;
    nnodeptr->lchild=nnodeptr->rchild=NULL;
    if((par->num)>(nnodeptr->num))
        par->lchild=nnodeptr;
    else
        par->rchild=nnodeptr;
}
void addnode(struct node **root,int ele)
{
    struct node *par;

    //Declare a new node
    struct node *nnodeptr=(struct node*)malloc(sizeof(struct node));
    nnodeptr->num=ele;
    nnodeptr->lchild=nnodeptr->rchild=NULL;
    if (*root==NULL) // Very first element
    {
        //printf("Parent at %d",par->num);
        *root=nnodeptr;
    }
    else
    {
        par=findpar(*root,ele);
        printf("Parent at %d",par->num); //Find parent

        if (ele>par->num)
            par->rchild=nnodeptr;
        else
            par->lchild=nnodeptr;
    }

}
void deletenode(struct node *par,int elem)
{
    struct node *child;
    if(elem<par->num)
        child=par->lchild;
    else
        child=par->rchild;
    while(child->num!=elem)
    {
        if(child->num<elem)
        {
            par=child;
            child=child->rchild;
        }
        else
        {
            par=child;
            child=child->lchild;
        }
    }
        if(par->lchild->num==elem)
            par->lchild=NULL;
        else
            par->rchild=NULL;

}
void deletenode1(struct node *root,int val)
{
    struct node *child,*grandchild,*par;
    par=root;
    int elem=val;
    if(elem<par->num)
        child=par->lchild;
    else
        child=par->rchild;
    while(child->num!=elem)
    {
        if(child->num<elem)
        {
            par=child;
            child=child->rchild;
        }
        else
        {
            par=child;
            child=child->lchild;
        }
    }
    if(child->lchild==NULL)
        grandchild=child->rchild;
    else
        grandchild=child->lchild;
    if(par->num>child->num)
        par->lchild=grandchild;
    else
        par->rchild=grandchild;
}
int findloc(struct node *root,int val)
{
   struct node *rider,*succ,*parsucc,*loc;
    loc=root;
    while(loc->num!=val)
    {
        if(val<(loc->num))
            loc=loc->lchild;
        else
            loc=loc->rchild;
    }
    return(loc);
}
void deletenode2(struct node *root,int val)
{
    struct node *rider,*succ,*parsucc,*loc;
    loc=root;
    while(loc->num!=val)
    {
        if(val<(loc->num))
            loc=loc->lchild;
        else
            loc=loc->rchild;
    }
    parsucc=loc;
    succ=loc->rchild;
    while(succ->lchild!=NULL)
    {
        parsucc=succ;
        succ=succ->lchild;
    }
    parsucc->rchild=succ->rchild;
    loc->num=succ->num;
    free(succ);
}
void display(struct node *root)
{
    printf("\nThe inorder traversal of tree is:\n");
    inorderdisplay(root);
    printf("\nThe preorder traversal of tree is:\n");
    preorderdisplay(root);
    printf("\nThe postorder traversal of tree is:\n");
    postorderdisplay(root);
}

void main()
{
    int elem,ch;
    struct node *root=NULL,*par,*loc;
    //struct node *nnodeptr=(struct node *)malloc(sizeof(struct node));
    //nnodeptr->num=100;
    //nnodeptr->rchild=nnodeptr->lchild=NULL;
    //root=nnodeptr;
    display(root);
    while(1)
    {
        printf("\n\n\nEnter choice \n1.Add\n2.Delete\n\n=> ");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("\n\nEnter the node to be added :");
            scanf("%d",&elem);

            addnode(&root,elem);
            display(root);
        }
        if(ch==2)
        {
            printf("\n\nEnter the node to be deleted :");
            scanf("%d",&elem);
            loc=findloc(root,elem);
            if(loc->lchild==NULL && loc->rchild==NULL)
            {
                deletenode(root,elem);
                display(root);
            }
            else if((loc->lchild==NULL)||(loc->rchild==NULL))
            {
                deletenode1(root,elem);
                display(root);
            }
            else
            {
                deletenode2(root,elem);
                display(root);

            }

        }
    }
}


