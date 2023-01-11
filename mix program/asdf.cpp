#include<stdio.h>
int main()
{
	int count=1;
	for(int i=1;i<=5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d    ",count++);
		}
		printf("\n");
	}
	return 0;
}
