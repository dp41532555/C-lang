#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
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
        while (ptr->next != head)
        {
            printf(" %d ", ptr->data);
            ptr = ptr->next;
        }
        printf(" %d ", ptr->data);
    }
    printf("\n");
}
void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    return;
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
        while (ptr->next != head)
        {
            prev = ptr;
            ptr = ptr->next;
        }

        prev->next = head;
        free(ptr);
    }
}
void midinsert(int val, int pos)
{
    struct node *ptr = head;
    struct node *prev;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = temp;
    temp->next = ptr;
}
void middelete(int pos)
{
    struct node *ptr;
    struct node *prev;

    if (head == NULL)
        printf("already empty..\n");
    else if (head->next == NULL)
    {
        head = NULL;
        printf("Delete element is: %d\n", head->data);
        free(head);
    }
    else
    {
        ptr = head;
        while (ptr->data != pos)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = ptr->next;
        printf("Delete element is: %d\n", ptr->data);
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
        temp->next = head;
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    head = temp;
    return;
}
void deletefirst()
{
    struct node *ptr=head;
    struct node *temp= head;

    if (head == NULL)
        printf("already empty..\n");
    else if (ptr->next == head)
    {
        head = NULL;
        free(head);
    }
    else
    {
       // ptr = head;
        while (ptr->next !=head)
            ptr = ptr->next;
        ptr->next = head->next;
        head = temp->next;
        free(temp);
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
        printf("5.mid insert element: \n");
        printf("6.mid delete element: \n");
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

          case 5:
             printf("insert element at position : ");
             scanf("%d",&x);
             printf("insert position : ");
             scanf("%d",&a);
             midinsert(x,a);
             break;

          case 6:
             printf("insert position: ");
             scanf("%d",&x);
             middelete(x);
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
