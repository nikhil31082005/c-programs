#include<stdio.h>
int main()
{
    char prize,Science,Mathematics,ScienceAndMathematics;
    printf("Enter which type of prize you won\n");
    scanf("%s",&prize);
       if(ScienceAndMathematics){
        printf("You win a prize of 45 Rupee");
    }
    else if(Science){
        printf("You win a prize of 15 Rupee");
    }
    else if(Mathematics){
         printf("You win a prize of 15 Rupee");
    }
 
    else{
        printf("You won nothing");
    }
    return 0;
}