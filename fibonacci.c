#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fact (n-2) + fact (n-1));
}
int main()
{
    int a,b;
    printf("Enter a : " );
    scanf("%d",&a);
    b = fact(a);
    for(b=1;b<a;++b)
    {
        printf(" ,%d",fact(b));
    }
}