#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%5==0 && a%11==0){
		printf("divisible by 5 and 11");
	}
	else if (a%11==0){
		printf("divisible by 11");
	}
	else if (a%5==0){
		printf("divisible by 5");
	}
	else{
		printf("not divisible by 5 and 11");
	}
	return 0;	
}
