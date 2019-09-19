#include<stdio.h>
void main()
{
    int m=4,i,j,t;

    int list[4][4]={ {1,2,3,10},
                    {4,5,6,11},
	                {7,6,9,12},
		            {5,9,6,15 } },list1[4][4];

    /*printf("Enter the row and cols of the matrix:");
    int list[m][m];
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

        // Printing
    printf("\n\nThe Orginal matrix:\n");
    for (i=0;i<m;i++)
     {
         for (j=0;j<m;j++)
         {
             printf("%d ",list[i][j]);
         }
         printf("\n");
     }



     //Transpose
     for (i=0;i<m;i++)
     {
         for (j=0;j<i;j++)
         {
             //list1[j][i]=list[i][j];
             t=list[i][j];
             list[i][j]=list[j][i];
             list[j][i]=t;
         }
     }

     // Printing
    printf("\n\nThe Transposed matrix:\n");
    for (i=0;i<m;i++)
     {
         for (j=0;j<m;j++)
         {
             printf("%d ",list[i][j]);
         }
         printf("\n");
     }


}
