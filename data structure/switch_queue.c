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
int firstinsert(int a[], int val)
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

int lastdelete(int a[])
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

int lastinsert(int a[], int val)
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
int firstdelete(int a[])
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
    int ch,x;

        printf("=====================\n");
        printf("1.last insert element: \n");
        printf("2.last delete element: \n");
        printf("3.first insert element: \n");
        printf("4.first delete element: \n");
        printf("5.display\n");
        printf("0.exit\n");
        printf("=====================\n");
    while(ch!=0)
    {
        
        printf("enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
          case 1:
             printf("insert element: ");
             scanf("%d",&x);
             lastinsert(a,x);
             break;
          
          case 2:
             lastdelete(a);
             break;

          
          case 3:
            printf("insert element: ");
             scanf("%d",&x);
             firstinsert(a,x);
             break;

          
          case 4:
             firstdelete(a);
             break;

          case 5:
             display(a) ;  

          case 0:
             break;
            default:
                printf("Worng choice.....!");
        }
        
    }
}




 