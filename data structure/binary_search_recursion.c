#include <stdio.h>
#define n 7

int fun(int a[], int val)
{
    int l, h, mid;
    l = 0;
    h = n - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == val)
            return mid + 1;
        else if (a[mid] > val)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    int i, h, l, a[] = {1, 2, 3, 4, 5, 6}, x, mid;
    printf("enter element to search: ");
    scanf("%d", &x);
    int z = fun(a, x);
    if (z > 0)
        printf("\nelement found at %d position", z);
    else
        printf("element not found");
}