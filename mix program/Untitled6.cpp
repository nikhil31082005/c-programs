#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,b;
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		r = n%10;
		sum = sum + pow(r,3);
		n = n/10;
	}
	if(sum==b)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not Armstrong");
	}
}
