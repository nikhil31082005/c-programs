// check the alphabet is vowel or consonent
#include<stdio.h>
int main()
{
	char c,lowercase_vowel,uppercase_vowel;
	scanf("%c",&c);
	lowercase_vowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
		uppercase_vowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
		if(lowercase_vowel || uppercase_vowel){
			printf("VOWEL");
		}
		else{
			printf("CONSONENTS");
		}
		return 0;
}
