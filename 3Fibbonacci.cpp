//write a c program to write first n of fibonacci series
#include<stdio.h>
int main()
{
	int n1 = 0, n2= 1, num, i, n3;
	printf("enter the number of elements \n");
	scanf("%d", &num);
	printf("%d\n %d \n", n1, n2);
	for(i=2 ;i<num; i++)
	{
		n3= n1+n2;
		printf("%d", n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
