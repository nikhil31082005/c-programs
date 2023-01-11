#include<stdio.h>

void sum();	// function definition

void sum() 	//function declaration 
{
	int a,b,sum;
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	sum = a+b;
	printf("%d\n",sum);
}
int main()
{
	sum();	// function calling
	printf("Hello World\n");
	sum();
	for(int i=0;i<10;i++)
	{
		printf("%d\n",i);
	}
	sum();
}
