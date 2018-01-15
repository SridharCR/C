/*
Queue Implementation
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
     int data;
     struct node* next;
}*front = NULL,*rear = NULL,*temp,*newnode;
void printQueue()
{
     temp = front;
     while(temp != NULL)
     {
          printf("%d\t",temp -> data );
          temp = temp -> next;
     }
     printf("\n" );
}
void create()
{
     newnode = (struct node *)malloc(sizeof(struct node));
     newnode -> next = NULL;
}
void enqueue(int inp)
{
     create();
     newnode -> data = inp;
     if(front == NULL)
          front = rear = newnode;
     else
     {
          rear -> next = newnode;
          rear = newnode;
     }
}
void dequeue()
{
     if(front == NULL)
     {
          printf("Queue is empty\n" );
          return;
     }
     else
     {
          temp = front;
          front = front -> next;
          free(temp);
     }
}
int main(int argc, char const *argv[]) {
     printf("Queue Implementation\n" );
     enqueue(5);
     enqueue(10);
     enqueue(15);
     printQueue();
     dequeue();
     printQueue();
     return 0;
}
