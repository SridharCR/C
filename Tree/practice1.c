/*
Tree Implementation
*/
#include<stdio.h>
#include<stdlib.h>
struct tree
{
     int data;
     struct tree* left;
     struct tree* right;
};

struct tree* newnode(int ip)
{
     struct tree* node = (struct tree*)malloc(sizeof(struct tree));
     node -> data = ip;
     node -> left = NULL;
     return (node);
}
int main(int argc, char const *argv[]) {
     struct tree *root;
     root = newnode(5);
     root -> left = newnode(4);
     root -> right = newnode(6);
     return 0;
}
