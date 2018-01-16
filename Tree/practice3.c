/*
Traversal of a Tree - DFS
*/
#include <stdio.h>
#include <stdlib.h>
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
     node -> right = NULL;
}
void printInorder(struct tree* node)
{
     if(node == NULL)
          return;
     printInorder(node -> left);
     printf("%d\t",node -> data );
     printInorder(node -> right);
}
void printPreorder(struct tree* node)
{
     if(node == NULL)
          return;
     printf("%d\t",node -> data );
     printInorder(node -> left);
     printInorder(node -> right);
}
void printPostorder(struct tree* node)
{
     if(node == NULL)
          return;
     printInorder(node -> left);
     printInorder(node -> right);
     printf("%d\t",node -> data );

}
int main(int argc, char const *argv[]) {
     struct tree* root = newnode(5);
     root -> left = newnode(4);
     root -> right = newnode(6);
     printInorder(root);
     printf("\n");
     printPreorder(root);
     printf("\n");
     printPostorder(root);
     printf("\n");
     return 0;
}
