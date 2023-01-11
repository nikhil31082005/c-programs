#include<stdio.h>
int main()
{
	int n,max,min,i=1,a;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(i==1)
		{
			min = a;
			max = a;
			i++;
		}
		else if(i>1)
		{
			if(min>a)
			min = a;
			if(max<a)
			max = a;
		}
	}
	printf("min = %d",min);
	printf("max = %d",max);
}
