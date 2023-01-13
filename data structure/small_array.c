#include <stdio.h>
void main()
{
    int a[5], i, n, temp;
    printf("enter n : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {.
        printf("\n a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    temp = a[0];
    for (i = 0; i < n; i++)
    {

        a[i] = a[i + 1];
    }
    a[n - 1] = temp;
    printf("\nchanged array is : ");
    for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
}