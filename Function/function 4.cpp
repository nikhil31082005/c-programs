#include<stdio.h>
int isodd(int);
int main()
{
	int a,n;
	printf("Enter how many number you check the value is even or odd :\n");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		printf("Enter the value of a :\n");
		scanf("%d",&a);
		isodd(a);
	}
}
int isodd(int a)
{
	if(a%2!=0)
	printf("Enter number is odd.\n");
	else
	printf("Enter number is even.\n");
}
