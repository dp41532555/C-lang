#include<stdio.h>
void count(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
            printf("%d",i+1);
        }
        else
        {
            printf("%c",a[i]);
        }
    }
}
void main()
{
    char a[64];
    printf("enter string: ");
    scanf("%s",&a);
    count(a);
    
}