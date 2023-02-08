
#include <stdio.h>
#define n 7
int i;
int f = -1;
int r = -1;
int midinsert(int a[],int val)
{
    if(f>=n-1)
        printf("array is overflow..\n");
    else
    {
        for(i=n-1;i>n/2;i--)
        {
            a[i]=a[i-1];
        }
        a[n/2]=val;
        ++f;
    }
}
int middelete(int a[],int val)
{
    if(r<0)
       printf("array is overflow..\n");
    else
    {
        for(i=n/2;i<n;i++)
        {
            a[i]=a[i+1];
        }
        r--;
    }
}

int firstinsert(int a[],int val)
{

    if(f<0)
    {
        f++;
        r++;
        a[f]=val;
    }
    else if(f==0)
    {
        printf("not insert element\n");
    }
    else
       a[--f] = val;   
}

int lastdelete(int a[],int val)
{
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else if(r<0)
    {
        printf("not delete element\n");
    }
    else
      --r;
}

int insert(int a[], int val)
{
    if (r >= n - 1)
        printf("queue is overflow.....\n");

    else if (r < 0)
    {
        ++f;
        a[++r] = val;
    }
    else
    {
        a[++r] = val;
    }
}
int delete(int a[], int val)
{
    if (f < 0)
        printf("array is underflow.....\n");

    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        ++f;
    }
}
int display(int a[])
{
    for (i = f; i <= r; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[n];
    insert(a, 10);
    insert(a, 20);
    insert(a, 30);
    insert(a, 40);
    insert(a,50);
    display(a);
    //delete (a, 10);
    //display(a);
    //firstinsert(a,50);
    //display(a);
    //lastdelete(a,50);
     //display(a);
     midinsert(a,14);
     display(a);
     middelete(a,14);
     display(a);
}
