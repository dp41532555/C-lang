#include<stdio.h>
void main()
{
    int i,a=1,num;
    printf("\n enter number : ");
    scanf("%d",&a);
    for(i=0;i<num;i++)
    {
        if(num%i==0)
        a=a+i;
    }
    if(a%num==0)
    {
    printf("num is perfect");
    }
    else
    {
        printf("num is not perfect");
    }
    
}