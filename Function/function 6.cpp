#include<stdio.h>

int sum(void);

int main()
{
	sum();
}
int sum()
{
	int a,b,sum=0;
	scanf("%d%d",&a,&b);
	sum = a+b;
	printf("sum = %d",sum);
}
