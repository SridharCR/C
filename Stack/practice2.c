/*
    Infix to Postfix expression

 */
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
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
          printf("The Stack is empty\n");
          return ' ';
     }
     del = head;
     head = head -> next;
     return del -> data;
}
int precedence_ip(char c)
{
     switch (c) {
          case '+':
               return 1;
          case '-' :
               return 1;
          case '*':
               return 3;
          case '/' :
               return 3;
          case '%':
               return 3;
          case '^':
               return 6;
          case '$':
               return 6;
          case '(':
               return 9;
          case ')':
               return 0;
          default:
               return 8;
     }
}
int precedence_st(char s)
{
     switch(s)
     {
          case '+':
               return 2;
          case '-':
               return 2;
          case '*':
               return 4;
          case '/':
               return 4;
          case '%':
               return 4;
          case '^':
               return 5;
          case '$':
               return 5;
     }
}
void infix_to_postfix(char input[20])
{
     char output[20],sr;
     int i,j=0;
     push('#');
     for(i = 0;i!='\0';i++)
     {
          sr = input[i];
          while(precedence_st(peek()) > precedence_ip(sr))
               output[j++] = peek();
          if(precedence_st(peek()) != precedence_ip(sr))
               push(sr);
          else
               pop();
          temp = head;
          while(temp != NULL)
          {
               output[j++] = peek();
          }
          output[j] = '\0';
          for(i = 0;i<j;i++)
          printf("%c\n", output[i]);
     }

}
int main(int argc, char const *argv[]) {
     char input[20];
     printf("Enter the expression: ");
     //gets(input);
     infix_to_postfix("a+b");
     return 0;
}
