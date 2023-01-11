#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int a[n],i,m,ele,pos;
	printf("Enter the size of array : ");
	scanf("%d",&m);
	
	printf("Enter the elements in array : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element and position : ");
	scanf("%d%d",&ele,&pos);
	for(i=m-1;i>=pos-1;i--)
	{
		a[i+1] = a[i];
	}
	m++;
	a[pos-1] = ele;
	for(i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
