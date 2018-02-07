#include <stdio.h>
#include <stdlib.h>
struct tree
{
     int data;
     struct tree *left,*right;
}*root,*newnode;

struct Queue
{
     struct stack* stack1;
     struct stack* stack2;
}*q;

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
     root = (struct tree*)malloc(sizeof(struct tree));
     struct tree* l1 = (struct tree*)malloc(sizeof(struct tree));
     struct tree* r1 = (struct tree*)malloc(sizeof(struct tree));
     struct tree* l2 = (struct tree*)malloc(sizeof(struct tree));
     struct tree* l3 = (struct tree*)malloc(sizeof(struct tree));
     root->data = 20;
     l1->data = 10;
     r1->data = 30;
     l2->data = 5;
     l3->data = 9;
     root->left = l1;
     root->right = r1;
     l1->left = l2;
     l1->right = l3;
     r1->left = NULL;
     r1->right = NULL;

     return 0;
}
