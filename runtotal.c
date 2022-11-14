#include<stdio.h>
//#define n 5
void array(int a[])
{
    int i,sum;
    for(i=0;i<5;i++)
    {
        if(i != 0)
        {
            sum = a[i-1]+a[i];
            printf("\n %d\t %d",a[i],sum);
        }
        else
        {
            printf("\n %d",a[i]);
        }
       
    }
}
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf (" enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    array(a);
}