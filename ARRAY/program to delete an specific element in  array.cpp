#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int a[n],i,ele,pos;
	for(i=0;i<n;i++)
	{
		scanf("%d",&n);
	}
	printf("Enter the element : ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			pos = i;
		}
	}
	for(i=pos;i<n-1;i++)
	{
		a[i] = a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
