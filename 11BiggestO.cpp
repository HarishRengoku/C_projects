#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b,c;
	printf("Enter the three numbers:\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%f is the biggest of the three :\n",a);
	}
	else if(b>a&&b>c)
	{
		printf("%f is the biggest of the three :\n",b);
	}
	else
	{
		printf("%f is the biggest of the three :\n",c);
	}
	return 0;
}
