#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	switch(a>b){
		case 1:
			printf("a is greater");
			break;
		default:
			printf("b is greater");
	}
	return 0;
}
