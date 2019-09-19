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
    if ((*root)->num==ele) // If Root is the element to be deleted
    {
        if ((*root)->lchild==NULL && (*root)->rchild==NULL)
            (*root)=NULL;
        else if ((*root)->lchild==NULL || (*root)->rchild==NULL)
        {
            if ((*root)->lchild==NULL)
                (*root)=(*root)->rchild;
            else
                (*root)=(*root)->lchild;
        }
        else
        {
            printf("Enbtered 3");
            gchild=(*root);
            child=(*root)->lchild;
            rider =child;
            while(rider!=NULL)
            {
                if(rider->rchild!=NULL)
                    gchild=child;
                child=rider;
                rider=rider->rchild;
            }

            (*root)=child;
            printf("Enbtered 3: %d",gchild->num);
            gchild->lchild=NULL;
            free(child);
        }
    }

}


void main()
{
    struct tnode *root=NULL;


    addelement(&root,45);
    addelement(&root,20);
    addelement(&root,100);
    //addelement(&root,120);
    printf("The Tree is :");inordertrav(root);printf("\n");
    deleteele(&root,45);
    printf("The Tree is :");inordertrav(root);printf("\n");

}
