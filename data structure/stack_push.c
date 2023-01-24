// stack operation
#include <stdio.h>
#define n 5
int i;
int top = -1;
int midinsert(int a[], int val)
{
    if (top >= n - 1)
        printf("array is overflow.....\n");

    else
    {
        for(i=n-1;i>=n/2;i--)
        {
            a[i] = a[i-1];
        }
        a[n/2] = val;
        ++top;
    }
}
int middelete(int a[])
{
    if (top <0)
        printf("array is overflow.....\n");

    else
    {
       for(i=n/2;i<n;i++)
        {
            a[i] = a[i+1];
            
        }
        // a[i] = val;
         top--;
           
    }
}
int display(int a[])
{
    for (i = 0; i <= top; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int insert(int a[], int val)
{
    if (top >= n - 1)
        printf("array is overflow.....\n");

    else
    {
        ++top;
        a[top] = val;
    }
}
int Firstinsert(int a[], int val)
{
    if (top >= n - 1)
        printf("array is overflow.....\n");

    else
    {
        for(i=n-1;i>=0;i--)
        {
            a[i] = a[i-1];
        }
        a[0] = val;
        ++top;
    }
}
int Firstdelete(int a[])
{
    if (top <0)
        printf("array is overflow.....\n");

    else
    {
       for(i=0;i<n;i++)
        {
            a[i] = a[i+1];
            
        }
         top--;
           
    }
}

int pop(int a[])
{
    if (top < 0 )
    {
        printf("Stack Underflow");   
    }
    else
    {
        top--;
    }
    
}
int main()
{
    int a[n];
    insert(a, 10);
    insert(a, 20);
    insert(a, 30);
    insert(a, 40);
    display(a);
    // pop(a);
    // pop(a);
    //Firstinsert(a,50);
   // Firstinsert(a,60);
   Firstdelete(a);
//  Firstdelete(a); 
    midinsert(a,50);
    display(a);
   middelete(a);

    display(a);
}
