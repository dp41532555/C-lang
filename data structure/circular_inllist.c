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
    struct node *ptr;
    struct node *prev;
    struct node *temp;

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
            ptr = ptr->next;
        ptr->next = head->next;
        head = temp->next;
        free(temp);
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
    insertfirst(10);
    print();
    deletefirst();
    print();

    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
}