#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int a[n],i,m,count1=0,count2=0;
	printf("Enter the size of array : ");
	scanf("%d",&m);
	
	printf("Enter the elements in array : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		if(a[i]%2==0)
		{
			count1++;
		}
		if(a[i]%2!=0)
		{
			count2++;
		}
	}
	printf("Even count in array is %d",count1);
	printf("\nOdd count in array is %d",count2);
	return 0;
}
