#include <stdio.h>
#include <stdlib.h>
struct node
{
          int data;
          struct node* next;
}*head;
void printList(struct node* display)
{
     while(display!=NULL)
     {
          printf("%d\t%p\n",display -> data,display -> next );
          display = display -> next;
     }
}
void swap(int x,int y)
{
     if(x == y)
          return;
     struct node *preX,*preY,*curX,*curY,*temp;
     curX = curY = head;
     while(curX!= NULL && curX -> data!= x)
     {
          preX = curX;
          curX = curX -> next;
     }
     while(curY!= NULL && curY -> data!= y)
     {
          preY = curY;
          curY = curY -> next;
     }
     if(curX == NULL || curY == NULL)
          return;
     if(preX != NULL)
          preX -> next = NULL;
     else
          head = curX;
     if(preY != NULL)
          preY -> next = NULL;
     else
          head = curY;
     temp = curY -> next;
     if(preX == curY || preY == curX)
     {
          curX -> next = curY -> next;
          curY -> next = curX;
          preX -> next = curY;
          return;
     }
     curY -> next = curX -> next;
     preX -> next = curY;
     curX -> next = temp;
     preY -> next = curX;
}
int main(int argc, char const *argv[]) {
     struct node* n1,*n2,*n3,*n4,*n5;
     n1 = (struct node*)malloc(sizeof(struct node));
     n2 = (struct node*)malloc(sizeof(struct node));
     n3 = (struct node*)malloc(sizeof(struct node));
     n4 = (struct node*)malloc(sizeof(struct node));
     n5 = (struct node*)malloc(sizeof(struct node));
     n1 -> data = 1;
     n1 -> next = n2;
     n2 -> data = 2;
     n2 -> next = n3;
     n3 -> data = 3;
     n3 -> next = n4;
     n4 -> data = 4;
     n4 -> next = n5;
     n5 -> data = 5;
     n5 -> next = NULL;
     head = n1;
     swap(2,3);
     printList(head);
     return 0;
}
