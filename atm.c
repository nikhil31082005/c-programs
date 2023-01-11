#include<stdio.h>
int main()
{
    int amt,tt,fh,th,h,f,t,te,fi,tw,o;
    printf("Enter the amount\n");
    scanf("%d",&amt);
    tt = amt/2000;
    amt = amt%2000;
    fh = amt/500;
    amt = amt%500;
    th = amt/200;
    amt = amt%200;
    h = amt/100;
    amt = amt%100;
    f = amt/50;
    amt = amt%50;
    t = amt/20;
    amt = amt%20;
    te = amt/10;
    amt = amt%10;
    fi = amt/5;
    amt = amt%5;
    tw = amt/2;
    amt = amt%2;
    o = amt/1;
    printf("2000-%d\n500-%d\n200-%d\n100-%d\n50-%d\n20-%d\n10-%d\n5-%d\n2-%d\n1-%d",tt,fh,th,h,f,t,te,fi,tw,o);
    return 0;
}