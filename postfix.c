#include<stdio.h>
void push(int stack[],int *top,int elem)
{
    (*top)++;
    stack[*top]=elem;
}
int pop(int stack[],int *top)
{
    int temp;
    temp=stack[*top];
    (*top)--;
    return(temp);
}
void display(int stack[],int top)
{
    int p;
    for(p=top;p>-1;p--)
        printf("%d\n",stack[p]);
}
int getval(char elem)
{
    if(elem=='a')
        return 10;
    if(elem=='b')
        return 5;
    if(elem=='c')
        return 2;
    if(elem=='d')
        return 8;
    if(elem=='e')
        return 4;
}
int inop(char c)
{
    switch(c)
    {
    case '+':
    case '-':
        return 1;
        break;
    case '*':
    case '/':
        return 2;
        break;
    default:
        return -1;
    }
}
void main()
{
    char postfix[20],infix[20],ch;
    int stack[20],pos,npos=0,elem,top=-1,n1,n2,n=0;
    printf("Enter the infix expression:");
    gets(infix);
    printf("\nThe infix expression is:");
    puts(infix);
    for(pos=0; infix[pos]!='\0'; pos++)
    {
        if((infix[pos]=='a')||(infix[pos]=='b')||(infix[pos]=='c')||(infix[pos]=='d'))
        {
            postfix[npos]=infix[pos];
            npos++;
        }
        else
        {
            if(infix[pos]=='(')
                push(stack,&top,infix[pos]);
            else if(infix[pos]==')')
            {
                while(stack[top]!='(')
                {
                    postfix[npos]=pop(stack,&top);
                    npos++;
                }
                top--;
            }
            else
            {
                if(top==-1)
                    push(stack,&top,infix[pos]);
                else if(inop(stack[top])>=inop(infix[pos]))
                {
                    postfix[npos]=pop(stack,&top);
                    npos++;
                    push(stack,&top,infix[top]);
                }
                else
                    push(stack,&top,infix[pos]);
            }
        }
    }
    while(top>-1)
    {
        postfix[npos]=pop(stack,&top);
        npos++;
    }
    postfix[npos]='\0';
    printf("\nThe postfix expression is:");
    puts(postfix);
    for(pos=0;postfix[pos]!='\0';pos++)
    {
        ch=postfix[pos];
        if((ch=='a')||(ch=='b')||(ch=='c')||(ch=='d'))
        {
          elem=getval(ch);
          push(stack,&top,elem);
          printf("\nThe stack elem are:\n");
          display(stack,top);
        }
        if(ch=='+')
        {
            n1=pop(stack,&top);
            n2=pop(stack,&top);
            n=n2+n1;
            push(stack,&top,n);
            printf("\nThe stack elem are:\n");
            display(stack,top);
        }
        if(ch=='-')
        {
            n1=pop(stack,&top);
            n2=pop(stack,&top);
            n=n2-n1;
            push(stack,&top,n);
            printf("\nThe stack elem are:\n");
            display(stack,top);
        }
        if(ch=='*')
        {
            n1=pop(stack,&top);
            n2=pop(stack,&top);
            n=n2*n1;
            push(stack,&top,n);
            printf("\nThe stack elem are:\n");
            display(stack,top);
        }
        if(ch=='/')
        {
            n1=pop(stack,&top);
            n2=pop(stack,&top);
            n=n2/n1;
            push(stack,&top,n);
            printf("\nThe stack elem are:\n");
            display(stack,top);
        }
    }
    if(top==0)
    {
        printf("\nThe result is:");
        display(stack,top);
    }
    else
        printf("\n Invalid stmt");
}

