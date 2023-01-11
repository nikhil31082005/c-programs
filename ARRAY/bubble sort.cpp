#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int a[n],m,i,j,temp;
	printf("Enter the size of array : ");
	scanf("%d",&m);
	printf("Enter the elementts of array : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("after sorting");
	for(i=0;i<m;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
