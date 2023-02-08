// merge sort
#include <stdio.h>
#include <stdlib.h>
void Merge(int a[], int l,int mid,int h)
{
   
    int b[100]; // new array
    int i = l, j = mid + 1;
    int k = l;
    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];
    while (j <= h)
        b[k++] = a[j++];
    for (i = l; i <= h; i++)
        a[i] = b[i]; // copy to old array
}
int Mergesort(int a[],int l,int h)
{
    
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        Mergesort(a, l, mid);
        Mergesort(a, mid + 1, h);
        Merge(a, l, mid, h);
    }
}
int main()
{
    int a[5], n = 5, i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 20 + 1;

    printf("before sorting array is: \n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

   Mergesort(a, 0, n - 1);
    printf("\nsorted array is \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]); // sorted array
}