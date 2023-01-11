#include<stdio.h>
int main()
{
	int r,n,sum=0,temp;
	printf("Enter the number\n");
	scanf("%d",&n);
	temp = n;
	while(n!=0)
	{
		r = n%10;
		sum = (sum*10)+r;
		n = n/10;
	}
	if(temp==sum)
	{
		printf("Number is Palindrome");
	}
	else{
		printf("Number is not Palindrome");
	}
}
