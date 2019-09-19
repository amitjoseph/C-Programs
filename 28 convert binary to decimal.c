#include<stdio.h>

void main()
{
    int b[50],l=0,i=0,dec=0;

    printf("\n\nBinary Value:");

    b[i]=0;
    while ((b[i]==0) || (b[i]==1))
    {
        scanf("%d",b[i]);
        ++i;
    }

    l=i-1;
    for (i=0;i<=l;i++)
    {
        dec=(b[i]*(2^l));
    }

    printf("\n\nDecimal Value:%d",dec);
    }

