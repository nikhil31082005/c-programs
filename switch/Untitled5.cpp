#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a>0){
		case 1:
			printf("a is positive");
			break;
		case 0:
			printf("a is negative");
			break;
		default:
			printf("a is zero");
	}
	return 0;
}
