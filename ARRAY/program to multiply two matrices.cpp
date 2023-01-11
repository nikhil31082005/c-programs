#include<stdio.h>
int main()
{
	int a[m][n],b[p][q];
	printf("Enter the value in this formate-->\na[m][n],a[p][q]");
	printf("Enter the values of m,n,p,q respectively");
	scanf("%d%d%d%d",&m,&n,&p,&q);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
	for(int k=0;i<k;k++)
	{
		for(int l=0;l<q;l++)
		{
			scanf("%d",b[k][l]);
		}
	}
	if(n==p)
	{
		printf("Matrix multiplication is possible");
		printf("Multiplication of matrix a and b is");
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				c[i][j] = a[i][j]*b[j][i];
			}
		}
	}
}
