#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int a[n],i,m,max,min;
	printf("Enter the size of array : ");
	scanf("%d",&m);
	
	printf("Enter elements in array : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	max = a[0];
	min = a[0];
	for(i=1;i<m;i++)
	{
		if(max<a[i])
		max = a[i];
		if(min>a[i])
		min = a[i];
	}
	printf("Min value is %d",min);
	printf("\nMax value is %d",max);
	return 0;
}
