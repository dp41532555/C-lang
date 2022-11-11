#include<stdio.h>
int maths,sci,english,total;
float per;
void calc()
{
    total = maths + sci + english;
    per = total / 3;
;
}
void display()
{
    printf("maths\tsci\tenglish\ttotal\tper\n");
    printf("%d\t%d\t%d\t%d\t%.2f",maths,sci,english,total,per);
}
void setdata()
{
    printf(" enter maths marks : ");
    scanf("%d",&maths);
     printf(" enter maths science : ");
    scanf("%d",&sci);
     printf(" enter english marks : ");
    scanf("%d",&english);
    calc();
    
}
void main()
{
    setdata();
    calc();
    display();
}