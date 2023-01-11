#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter m,n :");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int count1=0,count2=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
    }
    if(count1>count2)
    {
        printf("Sparsh matrix");
    }
    else
    {
        printf("Not Sparsh Matrix");
    }
    return 0;
}
