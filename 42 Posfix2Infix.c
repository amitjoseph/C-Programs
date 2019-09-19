#include<stdio.h>
// Infix to infixfix

void push(char stack[],int * top,char ch)
{
    (*top)++;
    stack[(*top)]=ch;

}
int pop(char stack[],int * top)
{
    char ele;
    if(*top!=-1)
    {
        char ch;
        ch=stack[(*top)];
        (*top)--;
        return(ele);
    }
    else
    {
        printf("Stack is Empty!");
        return(0);
    }
}
void display(char stack[],int top)
{
    int t;
    printf("The stack is :\n");
    for (t=top;t>=0;t--)
    {
        if (top==t)
            printf("|=>%6d|%15c|<=\n",t,stack[t]);
        else
            printf("|%8d|%15c|\n",t,stack[t]);
    }
    printf("\n");
}

void main()
{
    int top=-1,t,i;
    char stack[10],ch,post[10]="",ele;// (a+b)/2
    char infix[10]="(a+b)/2";
    push(stack,&top,'(');

    display(stack,top);

    ch=infix[0];

    for(i=0;ch!='\0';i++) //read the entire string
    {

        ch=infix[i];
       // if (ch=='a' || ch=='b') Check if small LETTEERTS
        if (ch>='a' && ch<='z')
        {
            printf("ch= %c\n",ch);
            //post=post+ch;
            printf("POSTFIX= %c\n",post);
        }
        else if (ch=='(')
        {
            push(stack,&top,ch);
            display(stack,top);
        }
        else if (ch==')')
        {
            ele=stack[top];
            for (t=top;ele!='(';t--)
            {
                ele=stack[t];
                //post+=ele;
                printf("POSTFIX= %c\n",post);
            }

        }
        printf("\n");
    }
}
