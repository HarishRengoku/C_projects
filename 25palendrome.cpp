
#include <stdio.h>
#include <string.h>

int main()
{
char a[100], b[100];

printf("Enter the string : ");
gets(a);

strcpy(b, a);
strrev(b); 

if (strcmp(a, b) == 0)
printf("The string is a palindrome\n");
else
printf("The string is not t a palindrome\n");

return 0;
}
