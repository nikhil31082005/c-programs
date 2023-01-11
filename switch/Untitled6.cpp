#include<stdio.h>
#include<math.h>
int main()
{
	// quadratic equation of type ax^2+bx+c where p and q are the roots
	int a,b,c,p,q;
	scanf("%d%d%d",&a,&b,&c);
	p = (-b+pow((b*b-(4*a*c)),1/2))/2*a;
	q = (-b-pow((b*b-4*a*c),1/2))/2*a;
	printf("%d and %d",p,q);
	return 0;
}
