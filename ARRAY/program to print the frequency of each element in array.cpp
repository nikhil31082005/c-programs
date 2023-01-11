#include<stdio.h>
#include<limitS.h>
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int a[n],max,i,b[INT_MAX]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max = a[i];
	}
	max++;
	for(i=0;i<n;i++)
	{
		b[a[i]]++;
	}
	for(i=0;i<max;i++)
	{
		if(b[i]>0)
		printf("%d = %d\n",i,b[i]);
	}
	return 0;
}
