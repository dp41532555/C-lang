//stack operation
#include<stdio.h>
#define n 5
int i;
int top=-1;
int display(int a[])
{
    for(i=0;i<top;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
int insert(int a[],int val)
{
    if(top>=n-1)
        printf("array is overflow.....\n");

    else
    {
        ++top;
        a[top]=val;
    }
}
int main()
{
    int a[n];
    insert(a,10);
    insert(a,20);
    insert(a,30);
    insert(a,40);
    insert(a,50);
    display(a);
}
