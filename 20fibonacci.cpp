#include<stdio.h>
int main()
{
	int n1=0,n2,n3,num,i;
	printf("Enter the no.of elements \n");
	scanf("%d",&num);
	printf("%d %d",n1,n2);
	for(i=2;i<num;i++)
	{
		n3=n1+n2;
		printf("\n %d ",n3);
		n1=n2;
		n2=n3;
		
	}
	return 0;
}
