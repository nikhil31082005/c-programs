#include<stdio.h>
int cube();
int main()
{
	cube();
}
int cube()
{
	int n;
	printf("Enter the value of n :\n");
	scanf("%d",&n);
	printf("%d",n*n*n);
}
