// print animated L

#include<stdio.h>

void main()
{
    int h,he=5,w,wi=5,d,de;
    for(h=1;h<=he-1;h++) //horizontal Arm
    {
        printf("L\n");
        for(d=1;d<=32000;d++)
            for(de=1;de<=1200;de++);
    }
    for (w=1;w<=wi;w++) //vertical Arm
    {
        printf("L ");
        for(d=1;d<=32000;d++)
            for(de=1;de<=1200;de++);
    }
}
