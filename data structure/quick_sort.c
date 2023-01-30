//quick sort
#include<stdio.h>
#include<stdlib.h>
int n;
void print(int a[])
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
void quicksort(int a[],int first,int last)
{
    int i,j,temp,key;
    if(first<last)
    {
        print(a);
        key=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[key]&&i<last)
            i++;
            while(a[j]>a[key])
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[key];
        a[key]=a[j];
        a[j]=temp;

        quicksort(a,first,j-1);//left side array
        quicksort(a,j+1,last);//right side array
    }
}
int main()
{
    int a[25],i;
    printf("how many element you want to enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    a[i]=rand()%99+1;

    print(a);
    quicksort(a,0,n-1);
    printf("\nafter quick sort: ");
    print(a);
}