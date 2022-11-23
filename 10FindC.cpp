//write a c program to find x 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float recursion(float n);
int main()
{
int n;
float ser=0,i;

printf("\nEnter n:");


scanf("%d",&n);
for(i=1; i<=n; i++)
ser+=1/recursion(i);


printf("\n Sum of series : 1");
for(i=2; i<=n; i++)
printf(" + 1/%.0f!",i);
printf(" = %.4f",ser);
getch();
}


float recursion(float n)
{
if (n>=1)
return n*recursion(n-1);
else
return 1;
}
