#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	char s1[30],s2[30];
	printf("Enter first string :\n");
	gets(s1);
	printf("Enter second string :\n");
	gets(s2);
	value = strcmp(s1,s2);
	if(value==0)
	printf("Strings are same.");
	else
	printf("Strings are not same.");
	return 0;
}
