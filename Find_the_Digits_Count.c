#include<stdio.h>
int main()
{
    int n=0,i,a;
    scanf("%d",&a);
    while(a>0)
    {
       n=n+1;
        a=a/10;
    }
    printf("%d",n);
}