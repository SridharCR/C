/*
Stack in ADT
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     unsigned top;
     struct node* next;
}*head = NULL,*newnode,*temp,*del;
void create()
{
     newnode = (struct node *)malloc(sizeof(struct node));
     newnode -> next = NULL;
}
void push(int in)
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
int main(int argc, char const *argv[]) {
     printf("Stack\n");
     push(5);
     push(6);
     push(1);
     push(3);
     push(8);
     printStack();
     pop();
     pop();
     pop();
     printStack();
     return 0;
}
