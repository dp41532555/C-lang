#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
void print()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("underflow...");
    }
    else
    {
        while (ptr != NULL)
        {
            printf(" %d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next=NULL;
        temp->prev=NULL;
        return;
    }
    else
    {
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
    temp->prev=ptr;
    temp->next=NULL;
    return;
    }
}
void deleteEnd()
{
    struct node *ptr;
    struct node *prev;
    if (head == NULL)
        printf("already empty..\n");
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        printf("Delete element is: %d\n",ptr->data);
        free(ptr);
    }
}
void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
    temp->next = head;
    head ->prev =temp;
    head=temp;
    return;
    }
}
void deletefirst()
{
    struct node *ptr = head;
    if (head == NULL)
        printf("already empty..\n");
    else if (head->next == NULL)
    {
        head = NULL;
        printf("Delete element is: %d\n",head->data);
        free(head);
    }

    else
    {
        head = ptr->next;
        printf("Delete element is: %d\n",ptr->data);
        free(ptr);
    }
}
int main()
{
    int a;
    int ch,x;

        printf("=====================\n");
        printf("1.last insert element: \n");
        printf("2.last delete element: \n");
        printf("3.first insert element: \n");
        printf("4.first delete element: \n");
        printf("7.display\n");
        printf("0.exit\n");
        printf("=====================\n");
    while(ch!=0)
    {
        
        printf("enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
          case 1:
             printf("insert element at last: ");
             scanf("%d",&x);
             insertEnd(x);
             break;
          
          case 2:
             deleteEnd();
             break;

          
          case 3:
            printf("insert element at first: ");
             scanf("%d",&x);
             insertfirst(x);
             break;

          
          case 4:
             deletefirst();
             break;

          case 7:
             print() ;  

          case 0:
             break;
            default:
                printf("Worng choice.....!");
        }
        
    }
}
