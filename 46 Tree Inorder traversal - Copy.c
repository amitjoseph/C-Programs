 #include <stdio.h>
 #include <malloc.h>

 struct tnode
 {
   struct tnode *lchild;
   int num;
   struct tnode *rchild;
 };

struct tnode *findparent(struct tnode *root,int ele)
 {
     struct tnode *child,*par=root;
     if (ele>root->num)
        child=root->rchild;
     else
        child=root->lchild;

     while (child!=NULL)
     {
         if (ele<child->num) //move child to left
         {
             par=child;
             child=child->lchild;

         }
         else if(ele==child->num)
         {
             break;
         }

         else // to right
         {
             par=child;
             child=child->rchild;

         }

     }
     //printf ("\nparent of %d is at :%d\n\n",ele,par->num);
     return (par);
 }


void addelement(struct tnode **root,int ele)
{
    struct tnode *par;
    //Declare a new node
    struct tnode *nnodeptr=(struct tnode*)malloc(sizeof(struct tnode));
    nnodeptr->num=ele;
    nnodeptr->lchild=nnodeptr->rchild=NULL;
    if (*root==NULL) // Very first element
    {
        *root=nnodeptr;
    }
    else
    {
        par=findparent(*root,ele);
        //printf("Parent at %d",par->num); //Find parent

        if (ele>par->num)
            par->rchild=nnodeptr;
        else
            par->lchild=nnodeptr;
    }

}

void inordertrav(struct tnode *rider)
{
    if (rider==NULL)
        return;
    inordertrav(rider->lchild);
    printf("%6d |",rider->num);
    inordertrav(rider->rchild);

}
void deleteele(struct tnode **root,int ele)
{
    struct tnode *par,*child,*gchild,*temp,*rider,*rrider;
    int d;
    if (*root==NULL) // Very first element
    {
        printf("\nThere are no elements in the Tree!");
    }
    else if (*root->num==ele)
    {
        par=findparent(*root,ele);
        temp=findparent(*root,par->num);
        *root=par;

        temp->rchild=NULL;
        printf("*root Chnage!");
    }
    else
    {
        par=findparent(*root,ele);
         printf("\n=====>Parent at %d",par->num); //Find parent

        if (ele==par->rchild)
            {

            child=par->rchild;
            d=1;
            }

        else if (ele==par->lchild)
            {
                child=par->lchild;
                d=0;
            }

        if ((child->lchild==NULL) && (child->rchild==NULL))//Case ONE  : 0 childern
        {
            printf("\n Entered CASE 1 \n");
            temp=child;
            if (ele==par->rchild)
                par->rchild=NULL;
            else if (ele==par->lchild)
                par->lchild=NULL;

            free(temp);

        }
        else
        {
            if ((child->lchild==NULL) || (child->rchild==NULL)) // CASE 2 :1 Child
            {
                printf("\n Entered CASE 2 \n");
                if (child->lchild==NULL)
                    gchild=child->rchild;
                else
                    gchild=child->lchild;

                temp=child;
                child=gchild;
                free(temp);
            }
            else // CASE 3 : 2 Children!
            {
                printf("\n Entered CASE 3 \n");
                temp=child;
                gchild=child->rchild;
                rider=gchild;
                while (rider!=NULL)
                {
                    rider=rider->lchild;
                }
                child=rider;
                free(temp);
                rrider=findparent(*root,rider->num);
                rrider->lchild=NULL;
                }
        }
    }
}

void deletec1(struct node *root,ele)// CASE 1 functiom
{
    struct node *rider,
}
void main()
{
    struct tnode *root=NULL;
deleteele(&root,26);
    addelement(&root,45);

    inordertrav(root);printf("\n");
    addelement(&root,100);
    inordertrav(root);printf("\n");
    addelement(&root,20);
    inordertrav(root);printf("\n");
    addelement(&root,70);
    inordertrav(root);printf("\n");
    addelement(&root,26);
    inordertrav(root);printf("\n");
    addelement(&root,27);
    inordertrav(root);printf("\n");
    addelement(&root,24);
    inordertrav(root);printf("\n");
    deleteele(&root,26);
    inordertrav(root);printf("\n");

}
