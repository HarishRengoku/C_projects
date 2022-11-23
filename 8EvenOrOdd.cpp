// C program to check if the given number is even or odd
#include<stdio.h>
int main()
{
	int num;
	printf("enter the number: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
	printf("The number is Even");
	
	else
	printf("The number is Odd");
	
	return 0;
	
}
