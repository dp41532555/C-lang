#include <stdio.h>
#include <stdlib.h>
#define n 10

int bubbleSort(int a[])
{
    int i, j, temp = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\n===============sorted array==============\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int i, j, a[n], x;
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 10 + 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    x = bubbleSort(a);
}
