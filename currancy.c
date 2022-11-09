#include<stdio.h>
int cur(int n)
{
    int i,a,b=0;
    int arr[7]={2000,500,200,100,50,20,10};
    for( int i=0;i<=7;i++)
    {
        if(n>arr[i])
        {
            i = a / arr[i];
            b = b + i;
            printf("%d:%d",arr[i],b);
            a = a % arr[i];
            b = b - i;
        }
    }
    printf("value is = %d\n",b);

}

int main()
{
    int n;
    printf("\n enter amount : ");
    scanf("%d",&n);
    cur(n);

}    