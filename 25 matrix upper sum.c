#include<stdio.h>
void main()
{
    int m=4,i,j,sum=0;

    int list[4][4]={ {1,2,3,10},
                    {4,5,6,11},
	                {7,6,9,12},
		            {5,9,6,15 } };


     for (i=0;i<m;i++)
     {
         for (j=0;j<m;j++)
         {
             if (i<j)
             {
                printf("%4d ",list[i][j]);
                sum=sum+list[i][j];
             }
             else
                printf("     ");


         }
         printf("\n");
     }
     printf("Sum of upper triangle: %d",sum);


}

