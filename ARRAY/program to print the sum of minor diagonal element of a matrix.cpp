#include<stdio.h>
int main()
{
	int n;
	printf("Enter the order of matrix :\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				sum +=+ a[i][j];
			}
		}
	}
	printf("%d",&sum);
	return 0;
}
