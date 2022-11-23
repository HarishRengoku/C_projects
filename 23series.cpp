
#include<stdio.h>
int main()
{
	int i,sum=0,num;
	
	printf("Enter the last element of the series:\n");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
		
		if(i!= num)
			printf("%d + ",i);
		else
			printf("%d ",i);
		sum= sum+i;
	}
	printf("= %d",sum);
	
	return 0;
}
