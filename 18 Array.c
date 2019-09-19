#include<stdio.h>
 void main()
 {
     int arr[5]={40,8,87,56,3},p;
     for (p=0;p<5;p++)
        printf("%6d",arr[p]);
     printf("\n");

     //Odd Elements
     for (p=0;p<5;p++)
     {
         if (arr[p]%2==1)
            printf("%6d",arr[p]);
         else
            printf("      ");
     }
     printf("\n");

     //Odd index Elements
     for (p=0;p<5;p++)
     {
         if (p%2==1)
            printf("%6d",arr[p]);
         else
            printf("      ");
     }
     printf("\n");

     //Less than 20 Elements
     for (p=0;p<5;p++)
     {
         if (arr[p]<20)
            printf("%6d",arr[p]);
         else
            printf("      ");
     }
     printf("\n");

     //Grade
     for (p=0;p<5;p++)
     {
         if (arr[p]>=90)
            printf("%6d | S\n",arr[p]);
         else
            if (arr[p]>=80)
                printf("%6d | A\n",arr[p]);
            else
                if (arr[p]>=70)
                    printf("%6d | B\n",arr[p]);
                else
                    if (arr[p]>=60)
                        printf("%6d | C\n",arr[p]);
                    else
                        if (arr[p]>=50)
                            printf("%6d | D\n",arr[p]);
                        else
                            printf("%6d | F\n",arr[p]);

     }
     printf("\n");
 }
