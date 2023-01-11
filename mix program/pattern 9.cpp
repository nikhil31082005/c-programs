#include<stdio.h>
int main()
{
	int k=1;
	for(int i=65;i<=69;i++)
	{
		for(int j=65;j<=69;j++)
		{
			printf("%c ",k++);
		}
		printf("\n");
	}
	return 0;
}
