#include<stdio.h>
#include<conio.h>
int main()
{
	int i, j, temp;
	int a[11]={5,3,1,6,0,2,4,8,6,11};
	
	printf("\n\n\t this is the program of sorting array elements using bubblesort: ");
	printf("\n\n-----------------------------------------------------------------------");
	for(i=0; i<10; i++)
	{
		for(j= i+1; j<10; j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n the sorting of of the elements are: \n");
	
    for(i=9; i>0; i--)
    {
    	printf("\n %d", a[i]);
	}
	return 0;
}
