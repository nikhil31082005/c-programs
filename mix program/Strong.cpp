// Check whether the number is strong or not.

#include<stdio.h>
int main()
{
	int r,n,sum=0,temp;
	printf("Enter the number\n");
	scanf("%d",&n);
	temp = n;
	
	while(n)
	{
		r = n%10;
		int i=1;
		int fact=1;
		while(i<=r){
			fact = fact*i;
		}
		sum = sum + fact;
		n = n/10;
	}
	if(temp==sum){
		printf("Strong Number");
	}
	else{
		printf("Not Strong Number");
	}
	return 0;
}
