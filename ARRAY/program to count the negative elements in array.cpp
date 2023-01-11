#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int a[n],i,m,count=0;
	printf("Enter the size of array : ");
	scanf("%d",&m);
	
	printf("Enter the elements in array : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		if(a[i]<0)
		{
			count++;
		}
	}
	printf("Negative number in array is %d",count);
	return 0;
}
