#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i=1;
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	while(i<=n)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
		i++;
	}
}
