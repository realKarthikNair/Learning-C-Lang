// Display first 50 multiples of 7 Using while loop

#include <stdio.h>

void main()
{
    int  count=0, a=7;
    while (count<=50)
    {
        printf("%d ",a);
        a+=7;count++;
    }
    printf("\n");
}