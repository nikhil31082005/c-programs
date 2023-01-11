#include<stdio.h>
void isprime(int);
int main()
{
	int a;
	printf("Enter the value of a");
	scanf("%d",&a);
	isprime(a);
}
void isprime(int a)
{
	int count=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		count++;
	}
	if(count==2)
	printf("Number is prime");
	else
	printf("Number is not prime");
}
