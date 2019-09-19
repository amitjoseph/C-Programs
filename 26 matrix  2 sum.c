#include<stdio.h>
void main()
{
    int m=4,i,j,sum=0;

    int list[4][4]={ {1,2,3,10},
                    {4,5,6,11},
	                {7,6,9,12},
		            {5,9,6,15 } };

    int list1[4][4]={0,1,2,3,
                    2,3,4,5,
                    5,3,2,1,
                    0,2,3,6};


    /*printf("Enter the row and cols of the matrix:");
    int list[m][m],list1[m][m];
    scanf("%d",&m);

     //Inputing the matrix
     for (i=0;i<m;i++)
     {
         for (j=0;j<m;j++)
         {
             scanf("%d",&list[i][j]);
         }
     }
*/

    printf("\n\nThe 1st matrix:\n");
     for (i=0;i<m;i++)
     {
         for (j=0;j<m;j++)
         {
            printf("%4d ",list1[i][j]);

         }
         printf("\n");
     }

     printf("\n\nThe 2nd matrix:\n");
      for (i=0;i<m;i++)
     {
         for (j=0;j<m;j++)
         {
            printf("%4d ",list[i][j]);

         }
         printf("\n");
     }

     printf("\n\nThe Sum of the matrix:\n");
      for (i=0;i<m;i++)
     {
         for (j=0;j<m;j++)
         {
            printf("%4d ",list[i][j]+list1[i][j]);

         }
         printf("\n");
     }

}



