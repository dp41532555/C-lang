
#include <stdio.h>
#define n 5
int i;
int f = -1;
int r = -1;


int insert(int a[], int val)
{
    if ((r+1) % n == f)
        printf("queue is overflow.....\n");

    else if (r < 0)
    {
        ++f;
        a[++r]=val;
    }
    else
    {
        r = (r + 1) % n;
        a[r] = val;
    }
}
int delete(int a[], int val)
{
    if (f < 0)
        printf("array is underflow.....\n");

    else if ((f + 1) % n == r)
    {
        f = r = -1;
    }
    else
    {
     
        f = (f + 1) % n;
    }
}
int display(int a[])
{
    i=f;
    do
    {
        printf("%d ", a[i]);
        i = (i + 1) % n;
      
    } while (i != (r + 1) % n);
    printf("\n");
}
int main()
{
    int a[n];
    insert(a, 10);
    insert(a, 20);
    insert(a, 30);
    insert(a, 40);
    insert(a, 50);
    display(a);
    delete (a, 10);
    display(a);
   insert(a, 60);
    display(a);
  // insert(a, 70);
    
}
