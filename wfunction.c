#include<stdio.h>
int cur(int n)
{
    int amt,a,i,b=0;
    int r[]={ 2000,500,200,100,50,20,10,5};
    
    for(int i = 0 ; i < 8 ; i++)
    {
        if(n >= r[i])
        {
            a = n / r[i];
            b = b + a;
            printf("%d : %d\t\n ", r[i] ,b );    
            n = n % r[i];
            b = b - a;

        }
    }
}

int main()
{
     int amt;
    printf("\n enter amount : ");
    scanf("%d",&amt);
    cur(amt);
}