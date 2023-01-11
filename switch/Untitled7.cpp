#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	int operand;
	printf("Enter the two number");
	scanf("%d%d",&a,&b);
	printf("Enter operand"); 
	scanf("%d",&operand);
	switch(operand){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
	}
	return 0;
}
