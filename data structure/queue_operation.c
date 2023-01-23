#include <stdio.h>
#define n 5
int i;
int f = -1;
int r = -1;

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
    display(a);

     delete(a,10);
     display(a);
}