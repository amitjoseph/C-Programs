// to print a increasing E made of E's

#include<stdio.h>


void main()
{
    int a,arm=4,h,hi=5,i,in=50,d,de;
    for(i=1;i<=in;i++)
    {
        for(a=1;a<=arm;a++) //Upper Arm length
            printf("L ");
        printf("\n");
        for(h=1;h<=(hi-3)/2;h++) //Height
            printf("L\n");
        for(a=1;a<=arm;a++) //Middle Arm length
            printf("L ");
        printf("\n");
        for(h=1;h<=(hi-3)/2;h++) //Height
            printf("L\n");
        for(a=1;a<=arm;a++) //Lower Arm length
            printf("L ");
        printf("\n\n\n");
        if (i%2==0)
        {
            arm++;

        }
        else
        {
            hi=hi+2;
        }

        for(d=1;d<=32000;d++)
            for(de=1;de<=1200;de++);
        system("cls");
    }
}
