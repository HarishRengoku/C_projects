//C program to find the factorial of a number
#include<stdio.h>
int main()
{
	int i, fact=1 , num;
	printf("enter a number ");
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
		fact= fact * i;
	}
	printf("factorial of the number is %d is %d", num, fact);
	return 0;
}
