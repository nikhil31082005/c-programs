#include<stdio.h>
int main()
{
	int n;
	long fact=1;
	scanf("%d",&n);
	while(n!=0)
	{
		fact *= n;
		n--;
	}
	printf("%ld",fact);
}
