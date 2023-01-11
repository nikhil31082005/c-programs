#include<stdio.h>
int radius()
{
	float r;
	printf("Enter the value of r :\n");
	scanf("%f",&r);
	printf("Diameter of circle is %f\n",2*r);
	printf("Perimetr of circle is %f\n",2*3.14*r);
	printf("Area of circle is %f\n",3.14*r*r);
}
int main()
{
	radius();
}
