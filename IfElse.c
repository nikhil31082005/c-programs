#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("You have entered %d as your age\n",age);
    if(age>=18) {
        printf("You can vote");
    }
    else if(age>10){
        printf("You can vote for kids only");
    }
    else{
        printf("You can't vote");
    }
    return 0;
}
