#include<stdio.h>
int main()
{
   float r,h,A,V;
   printf("Enter the value of r\n");
   scanf("%f",&r);
    printf("Enter the value of h\n");
   scanf("%f",&h);
   A = 3.14*r*r;
   V = 3.14*r*r*h;
   printf("The area of cicle is %f\n",A);
   printf("The volume of cylinder is %f",V);
   return 0;

}