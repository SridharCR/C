/*
Balanced expression
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
     char data;
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
          printf("%c  ",temp -> data);
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
char peek()
{
     if(head == NULL)
     {
          printf("The Stack is empty peek\n");
          return '#';
     }
     del = head;
     //head = head -> next;
     return del -> data;
}
int matchParan(char p)
{
     switch (p)
      {
          case '(':
               return 1;
               break;
          case ')':
               return 1;
               break;
          case '{':
               return 2;
               break;
          case '}':
               return 2;
               break;
          case '[':
               return 3;
               break;
          case ']':
               return 3;
               break;
     }
}
int balancedExp(char input[20])
{
     char output[20],sr;
     int i = 0,j = 0;
     char open[] = "([{";
     char close[] = ")]}";
     for(i = 0;input[i] != '\0';i++)
     {
          sr = input[i];
          if(sr == '(' || sr == '{' || sr == '[')
               push(sr);
          else if(matchParan(sr) == matchParan(peek()))
               pop();
     }
     if(head == NULL)
          return 1;
     else
          return 0;
}
int main(int argc, char const *argv[]) {
     char input[20];
     printf("Enter the expression :\n" );
     gets(input);
     if(balancedExp(input))
          printf("GOOD\n" );
     else
          printf("BAD\n" );
     return 0;
}
