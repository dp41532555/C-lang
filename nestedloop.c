#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("\n enter number : ");
    scanf("%d",&n);
    printf("\n%d",b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    printf(" %d",c);
    }
}