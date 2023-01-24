#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
void addFirst(struct node **head, int val)
{
      //create a new node
      

      struct node *newNode = malloc(sizeof(struct node));
      newNode->data = val;
      

}
void addFirst(struct node **head, int val)
{
      //create a new node
      struct node *newNode = malloc(sizeof(struct node));
      newNode->data = val;
      

      newNode->next = *head;
      

}
void addFirst(struct node **head, int val)
{
      //create a new node
      struct node *newNode = malloc(sizeof(struct node));
      newNode->data = val;

      newNode->next = *head;
      

      *head = newNode;
      

}