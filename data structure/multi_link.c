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
        return;
    }

    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
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
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
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

    temp->next=head;
    head=temp;
    return;
}
void deletefirst()
{
    struct node *ptr=head;
    //struct node *prev;
    if (head == NULL)
        printf("already empty..\n");
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }

    else
    {
       //ptr=head;
       head=ptr->next;
       free(ptr);
    }
}
int main()
{
   insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);
   insertEnd(5);
    insertEnd(6);
    print();
    insertfirst(10);
    print();
    deletefirst();
    deletefirst();
    print();
}