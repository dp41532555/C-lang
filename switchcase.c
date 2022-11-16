#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("\n1. Addition");
    printf("\n2. multipication");
    printf("\n3. substraction");
    printf("\n4. division");
    printf("\n0. exit");
     printf("\n enter your choice : ");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1 :
            printf("\n Addition of a and b is : %d",a+b);
            break;
        case 2 :
            printf("\n multipication  of a and b is : %d",a*b);
            break;
        case 3 :
            printf("\n substraction of a and b is : %d",a-b);
            break;
        case 4 :
            printf("\n division of a and b is : %d",a/b);
            break;
        default :
            printf("\n invalid choice");
            break;    
     }
}