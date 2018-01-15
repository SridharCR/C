/*
Queue using Stacks
*/
#include<stdio.h>
#include<stdlib.h>
struct stack
{
     int data;
     struct stack* next;
}*head = NULL,*newnode,*temp,*del;
struct Queue
{
     struct stack* stack1;
     struct stack* stack2;
}*q;
void create()
{
     newnode = (struct stack *)malloc(sizeof(struct stack));
     newnode -> next = NULL;
}
void push(struct stack *s,int in)
{
     create();
     newnode -> data = in;
     if(head == NULL)
     {
          head = newnode;
          return;
     }
     newnode -> next = head;
     head = newnode;
}
void printStack()
{
     temp = head;
     while(temp!= NULL){
          printf("%d   ",temp -> data);
          printf("%p  \n",temp -> next );
          temp = temp -> next;
     }
}
void pop()
{
     if(head == NULL)
     {
          printf("The Stack is empty\n");
          return;
     }
     del = head;
     head = head -> next;
     free(del);

}
void enQueue(struct queue *q, int x)
{
    push(&q->stack1, x);
}
int deQueue(struct queue *q)
{
    int x;
    if(q->stack1 == NULL && q->stack2 == NULL)
    {
        printf("Q is empty");
        getchar();
        exit(0);
    }
    if(q->stack2 == NULL)
    {
         while(q->stack1 != NULL)
         {
             x = pop(&q->stack1);
             push(&q->stack2, x);
         }
    }
    x = pop(&q->stack2);
    return x;
}
int main(int argc, char const *argv[]) {

     return 0;
}
