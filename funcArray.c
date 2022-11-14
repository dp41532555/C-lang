#include<stdio.h>

void printArray(int a[])
{
   for( int i = 0;i < 5;i++)
    {
        printf("%d",a[i]);
    } 
}
int main()
{
    int a[5],i;
    for( i = 0;i < 5; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printArray(a);
   

}