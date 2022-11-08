#include <stdio.h>

int reverse(int n)
{
    int rem = 0;
    while (n != 0)
    {
        rem = rem * 10;
        rem = rem + n % 10;
        n = n / 10;
    }
     printf("reverse of entered number is=%d\n",rem);  
}


int main()
{
    int n;
    printf("enter numbers : ");
    scanf("%d", &n);
    reverse(n);
}
