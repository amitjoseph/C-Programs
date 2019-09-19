#include<stdio.h>

void main()
{
    int w,wid=15,h,hei=11;
    for (hei=4;hei<=11;++hei)
    {

        wid=hei*3/4;
        printf("\n\n");
        //First Line
        for (h=1;h<=hei;h++)
        {
        printf("U"); //Fist U
        for (w=1;w<=wid-2;w++) //Print Space
            printf(" ");
        printf("U\n");
        }

        for (w=1;w<=wid;w++)
            printf("U");
        printf("\n");

        //The Stand

        /*for (w=1;w<=wid;w++)
            printf("I");
        printf("\n");*/

        for (h=1;h<=hei;h++)
        {
            for (w=1;w<=wid/2;w++)
                printf(" ");
            printf("I\n");
        }

        for (w=1;w<=wid;w++)
            printf("I");
        printf("\n");

    }


}
