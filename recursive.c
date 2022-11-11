#include<stdio.h>
int fact(int a)
{
    if(a==1)
        return 1;
    else
        return a * fact(a-1);
}
int main()
{
    int n,f;
    printf("\n enter number : ");
    scanf("%d",&n);
    f = fact(n);
    printf("given number factorial is : %d ",f);

}