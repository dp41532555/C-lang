#include<stdio.h>
void smallarray(int a[], int min)
{
    int  i;
    for(i=0;i<5;i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
    }
     printf("\n smallest number is : %d",min);


}
void largearray(int a[], int max)
{
    int i;
    
    for(i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
        
    }
    printf(" largest number is : %d",max);
}

void printArray(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
  
    
      
         
    
}
int main()
{
    int a[5],i,min,max;
    for( i = 0;i < 5; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
   
    printArray(a);
    smallarray(a, min);
    largearray(a, max);
   

}