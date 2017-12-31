#include<stdio.h>
#include<stdlib.h>/*
void insert();
void search();
void display();
struct node
{
	char data[6];
	char ident[10];
	char value[5];
	struct node* next;

}*head = NULL,*temp,*new_node;*/
int main()
{
	char *str;
	str = (char*) malloc(20);
	printf("Enter the expression\n");
	scanf("%s",str);
	return 0;

}
/*
void insert(char *s)
{

	new_node = malloc(sizeof(struct node*));
	new_node -> data ;
	new_node -> ident;
	new_node -> value ;
	temp = head;
	while(temp!=NULL)
		temp = temp -> next;
	temp -> next = new_node;
}
void search(char *sea)
{
	temp = head;
	while(temp!= NULL)
	{
		temp = temp ->next;
		if(temp -> data == sea -> data)
		{
			printf("Already present in symbol table\n");
			break;
		}

	}
	printf("Symbol not found in the table\n");

}
void display()
{
	temp = head;
	while(temp!=NULL)
		printf("%s\t%s\t%s\t%p",temp -> data,temp -> ident,temp -> value,temp -> next );
}

*/