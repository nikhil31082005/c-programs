#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int T,i,n;
        scanf("%d",&T);
        for(i=0;i<T;i++)
        {
                scanf("%d",&n);
                int a[n],j,temp;
                for(i=0;i<n;i++)
                {
                        scanf("%d",&a[i]);
                }
                for(i=0;i<n-1;i++)
                {
                        for(j=0;j<n-1-i;j++)
                        {
                                if(a[j]>a[j+1])
                                {
                                        temp = a[j];
                                        a[j] = a[j+1];
                                        a[j+1] = temp;
                                }
                        }
                }
                printf("%d",a[n-1]-a[0]);
        }
    return 0;
}
