#include<stdio.h>
int main()
{
	int n;
	printf("Enter n");
	scanf("%d",&n);
	int a[n],i=0,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
//	}
//	for(i=0;i<n;i++)
//	{
		if(a[i]%2==0)
		{
		sum = sum + a[i];
		}
			printf("%d",sum);

	}
//	printf("%d",sum);
	return 0;
}
