#include<stdio.h>
#include<math.h>
int main()
{
	int r,n,sum=0,temp;
	printf("Enter the number\n");
	scanf("%d",&n);
	temp = n;
	int count = log10(n)+1;
	while(n>0)
	{
		r = n%10;
		sum = sum + pow(r,count);
		n = n/10;
	}
	if(temp==sum)
	{
		printf("Armstrong number");
	}
	else{
		printf("Not armstrong number");
	}
}
