#include <stdio.h>
int prf(int num)
{

    int value, i, a = 0;

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            a = a + i;
        }
    }
    if (num == a)
    {
        printf("num is perfect");
    }
    else
    {
        printf("num is not perfect");
    }
}
int main()
{
    int value;
    printf("\n enter number : ");
    scanf("%d", &value);
    prf(value);
}
