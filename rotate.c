#include<stdio.h>

void main()
{

	int arr[4][4]={ {1,2,3,10},
		    {4,5,6,11},
	            {7,6,9,12},
		    {5,9,6,15 } };
	int prev,r,c,cur,row=0,col=0;


	prev=arr[col+1][row];
	for (r=row;r<4;r++)
	{
		cur=arr[col][r];
		arr[col][r]=prev;
		prev=cur;
	}
	row++;
	for(c=row;c<4;c++)
	{
		cur=arr[c][4-1];
		arr[c][4-1]=prev;
		prev=cur;

	}
	row++;
	for (r=row;r>=0;r--)
	{
		cur=arr[4-1][r];
		arr[4-1][r]=prev;
		prev=cur;

	}
	for(c=row;c>0;c--)
	{
		cur=arr[c][0];
		arr[c][0]=prev;
		prev=cur;
	}

	for (c=0;c<4;c++)
	{
		for (r=0;r<4;r++)
		{
			printf("%6d",arr[c][r]);
		}
		printf("\n");
	}
}
	

