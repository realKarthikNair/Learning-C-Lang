// Write a C program to find maximum between three numbers

#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);
	if ((a>b)&&(a>c))
	{
		printf("%d is the largest number !",a);
	}
	else if ((b>a)&&(b>c))
	{
		printf("%d is the largest number !",b);
	}
	else if ((c>a)&&(c>b))
	{
		printf("%d is the largest number !",c);
	}
	// Exception
	else
	{
		printf("Entered numbers are equal");
	}
	printf("\n");
}


