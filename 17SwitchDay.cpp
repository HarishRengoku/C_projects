#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char monday,tuesday,wednesday,thursday,friday,saturday,sunday;
	int day;
	printf("Enter the day number\n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			{
				printf("The day is Sunday");
				break;
			}
			case 2:
			{
				printf("The day is Monday");
				break;
			}
			case 3:
			{
				printf("The day is Tuesday");
				break;
			}
			case 4:
			{
				printf("The day is Wedensday");
				break;
			}
			case 5:
			{
				printf("The day is Thursday");
				break;
			}
			case 6:
			{
				printf("The day is Friday");
				break;
			}
			case 7:
			{
				printf("The day is Saturday");
				break;
			}
			default:
			{
				printf("Error, please enter a day between 1 to 7");
				break;
			}
	}
	return 0;
}
