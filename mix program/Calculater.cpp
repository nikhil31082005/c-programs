#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Enter two number :\n");
	scanf("%d%d",&a,&b);
	printf("Enter operater\n");
	scanf("%c",&ch);
	switch(ch)
	{
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
		case '%':
			printf("%d",a%b);
			break;
		default:
			printf("Enter valid operater");
	}
	return 0;
}
