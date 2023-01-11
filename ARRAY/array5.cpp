#include<stdio.h>
int main()
{
	int n;
	printf("Enter n -->");
	scanf("%d",&n);
	int a[n],i,m,ele,pos,k;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elemnt and position -->");
	scanf("%d%d",&ele,&pos);
	
	for(i=m-1;i>pos;i--)
	{
		a[i+1] = a[i];
	}
	m++;
	a[pos] = ele;
	
	for(i=0;i<m;i++)
	printf("%d",a[i]);
	return 0;
}
