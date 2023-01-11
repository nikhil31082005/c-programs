#include<stdio.h>
int main()
{
	int a,n,even=0,odd=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(a%2==0)
		even++;
		else
		odd++;
	}
}
