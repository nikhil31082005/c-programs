#include<stdio.h>

int squar();
int main()
{
	int result;
	result = squar();
	printf("%d",result);
}
int squar()
{
	int n,result;
	printf("Enter the value of n : \n");
	scanf("%d",&n);
	result = n*n;
	return result;
}
