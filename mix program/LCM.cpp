#include<stdio.h>
int main()
{
	int a,b,p,k;
	printf("Enter two numbers :\n");
	scanf("%d%d",&a,&b);
	if (a>=b)
	{
		for(int i=a;a<=p ;i++)
		{
			 k= (p%a==0 && p%b==0);
		}
		printf("%d",p);
	}
	else
	{
			for(int i=b;b<=p ;i++)
		{
			 k= (p%a==0 && p%b==0);
		}
		printf("%d",p);
	}
	return 0;
}
