//Swap

#include<stdio.h>

void main()
{
    int first,second,temp;

    first=10;
    second=4;
    printf("The value of a is %d and b is %d before Swapping \n\n",first,second);
    first=first+second;
    second=first-second;
    first=first-second;
    printf("\nThe value of a is %d and b is %d after Swap \n\n\n",first,second);


}
