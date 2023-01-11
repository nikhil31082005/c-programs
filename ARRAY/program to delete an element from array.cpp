#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int a[n],m,i,pos;
	printf("Enter the size of array : ");
	scanf("%d",&m);
	
	printf("Enter the elements of array : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position of element : ");
	scanf("%d",&pos);
	for(i=pos;i<m-1;i++)
	{
		a[i] = a[i+1];
	}
	m--;
	for(i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
