//Find the length of the string 
#include<stdio.h>

int main()
{
	char str[20];
	int i, l=0; 
	printf("\n Enter the string \n ");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		l++;
	}
	printf("\n length of the string is %d ", l);
	return 0;
}
