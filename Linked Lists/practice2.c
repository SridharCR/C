/*
** Linked List Insertions **
*/
#include<stdio.h>
#include <stdlib.h>
struct node
{
     int data;
     struct node* next;
}*head = NULL,*temp,*new_node;
void printList(struct node* display)
{
     while(display!=NULL)
     {
          printf("%d\t%p\n",display -> data,display -> next );
          display = display -> next;
     }
}
void create()
{
     new_node = (struct node*)malloc(sizeof(struct node));
     new_node -> next = NULL;
}
void insert_first()
{
     int value;
     printf("Enter the value to be inserted\n");
     scanf("%d",&value );
     create();
     new_node -> data = value;
     if(head == NULL)
     {
          head = new_node;
          return;
     }
     else
     {
          new_node -> next = head;
          head = new_node;
     }
     printList(head);
}
void insert_middle()
{
     int value,place;
     printf("Enter the value to be inserted and its position\n");
     scanf("%d %d",&value,&place );
     create();
     new_node -> data = value;
     temp = head;
     while (temp!=NULL && place !=1)
     {
          temp = temp -> next;
          place--;
     }
     new_node -> next = temp -> next;
     temp -> next = new_node;
     printList(head);
}
void insert_last()
{
     int value;
     printf("Enter the value to be inserted\n");
     scanf("%d",&value );
     temp = head;
     create();
     new_node -> data = value;
     if(head == NULL)
     {
          head = new_node;
          return;
     }
     while (temp -> next != NULL)
          temp = temp -> next;
     temp -> next = new_node ;
     printList(head);
}
int main() {
     int choice;
     while(1){
     choice = 0;
     printf("Enter the required choice:\n");
     printf("1.Insert First\n");
     printf("2.Insert Middle\n");
     printf("3.Insert Last\n");
     printf("4.Exit\n" );
     scanf("%d",&choice );
     switch (choice) {
          case 1:
               insert_first();
               break;
          case 2:
               insert_middle();
               break;
          case 3:
               insert_last();
               break;
          case 4:
               exit(0);
          default:
               printList(head);
               break;
          }
     }
     return 0;
}
