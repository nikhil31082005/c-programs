#include<stdio.h>
int main()
{
	int n;
	printf("Enter n -->");
	scanf("%d",&n);
	int a[n],i,ele,m,k,f=0;
	printf("Enter m -->");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element -->");
	scanf("%d",&ele);
	for(i=0;i<m;i++)
	{
		if(a[i]==ele)
		{
			f=1;
			k=i+1;
			break;
		}
	}
	if(f==1)
	printf("Element found at location %d",k);
	else
	printf("Not found");
	return 0;
}
