#include<stdio.h>
#include<stdlib.h>
#define n 5
int linear(int a[], int val)
{
    int i;
    for ( i = 0; i < n; i++)
    {
         if(a[i]==val)
          return i+1;
    }
    return -1;
    
}
int main()
{
    int a[n],i,x;
    for ( i = 0; i < n; i++)
    {
        a[i]=rand()%10+1;
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nenter element to search: ");
    scanf("%d",&x);
    int z=linear(a,x);
    if(z>0)
    printf("element found at %d position",z);
    else
    printf("element not found");
}