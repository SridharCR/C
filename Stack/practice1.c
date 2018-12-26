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
     while(temp != NULL){
          printf("%d  \n ",temp -> data);
          //printf("%p  \n",temp -> next );
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
     int opra,sel;
     printf("Sridhar\t\t15IT46\nStack Allocation Strategy\n");
     while(1)
     {
     printf("\n1.Push into the stack\n2.Pop from the stack\n3.Display the stack\n4.Exit\n");
     printf("Enter the operation :");
     scanf("%d",&sel );
     switch (sel) {
          case 1:
               printf("Enter the value:\t");
               scanf("%d",&opra);
               push(opra);
               printStack();
               break;
          case 2:
               pop();
               printStack();
               break;
          case 3:
               printStack();
               break;
          case 4:
               exit(0);
     }
}
     return 0;
}
