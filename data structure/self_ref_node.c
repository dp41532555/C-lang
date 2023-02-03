#include<stdio.h>
//#include<stdlib.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};
int main()
{
    struct node x,y,z;
    x.data=65;
    x.ch='a';
    x.ptr=NULL;

    y.data=68;
    y.ch='b';
    y.ptr=NULL;

    //printf("x data: %d\t char : %c",x.data,x.ch);
    //printf("\ny data: %d\t char : %c",y.data,y.ch);
    x.ptr=&y;
    y.ptr=&x;

    printf("data of y using x\n data: %d\tchar : %c",x.ptr->data,x.ptr->ch);
    printf("\ndata of x using y\n data: %d\tchar : %c",y.ptr->data,y.ptr->ch);
}