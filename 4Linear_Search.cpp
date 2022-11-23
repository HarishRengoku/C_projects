#include<stdio.h>
int linear(int a[], int key, int n)
{
	int i;
	for(i=0; i<n; i++)
	if(a[i]==key)
	return i+1;
	return -1;
}
int main()
{
	int a[20], n,key, i, position;
	printf("\n\n\t this is the process of searching an element");
	printf("\n\n----------------------------------------------");
	
	printf("enter the size of the array: \n");
	scanf("%d",&n);
	
	printf("\n\t enter the array elements: \n");
	for(i=0; i<n; i++)
	
	scanf("%d", &a[i]);
	
	printf("\n\t enter the key to be searched: ");
	scanf("%d", &key);
	
	position= linear(a,key,n);
	if(position== -1)
	printf("\n\n\t item not found");
	else
	printf("\n\n\t key found at position %d", position);
	return 0;
}
