#include<stdio.h>
#include<stdlib.h>
int greatest_num(int a, int b, int c)
{
	if(a>=b && a>=c )
	return a;
	
	else if(b>=a && b>=c)
	return b;
	
	else if(c>=a && c>=b)
	return c;
}
int main()
{
	int m, n, o;
	printf("Enter the first number: ");
	scanf("%d", &n);
	
	printf("Enter the second number: ");
	scanf("%d", &m);
	
	printf("Enter the third number: ");
	scanf("%d", &o);
	
	int result;
	
	for(result= greatest_num(m,n,o); result>= 1; result--)
	{
		if(m % result==0 && n % result == 0 && o % result == 0 )
		{
			break;
		}
	}
	printf("GCD of given number is: %d \n", result);
	return 0;
}
