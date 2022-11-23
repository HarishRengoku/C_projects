//c program to find the length of a string using library function
 
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int len;
printf("enter the string: ");
gets(str);

len= strlen(str);

printf("the size of the string is %d", len);
return 0;
}
