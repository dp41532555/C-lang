#include <stdio.h>
#include <stdlib.h>
#define n 10

int selectionSort(int a[])
{
    int i, j, temp = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
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
    x = selectionSort(a);
}
