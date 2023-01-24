#include<stdio.h>
#define max 50
 typedef struct 
 {
    char s[max];
    int tos;
 }stack;
 
 int isempty(stack*t)
{
    if(t->tos==-1)
    return -1;
    else
    return 0;
}