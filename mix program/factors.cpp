#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0){
			printf("%d ",i);
		}
	}
}
