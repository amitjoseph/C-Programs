// to print a E made of E's

#include<stdio.h>

void main()
{
    int a,arm=17,h,hi=21,d,de;
    for(a=1;a<=arm;a++) //Upper Arm length
        {
            printf("L ");
            for(d=1;d<=32000;d++)
                for(de=1;de<=1200;de++);
        }
    printf("\n");
    for(h=1;h<=(hi-3)/2;h++) //Height
        {
            printf("L\n");
            for(d=1;d<=32000;d++)
                for(de=1;de<=1200;de++);
        }
    for(a=1;a<=arm;a++) //Middle Arm length
        {
            printf("L ");
            for(d=1;d<=32000;d++)
                for(de=1;de<=1200;de++);
        }
    printf("\n");
    for(h=1;h<=(hi-3)/2;h++) //Height
        {
            printf("L\n");
            for(d=1;d<=32000;d++)
                for(de=1;de<=1200;de++);
        }
    for(a=1;a<=arm;a++) //Lower Arm length
        {
            printf("L ");
            for(d=1;d<=32000;d++)
                for(de=1;de<=1200;de++);
        }
}
