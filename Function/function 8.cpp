#include<stdio.h>
int swap(int , int);
int main()
{
	int a,b;
	printf("Enter the value of a and b : \n");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
int swap(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
		printf("After swapping\n a =%d and b=%d ",a,b);
}
