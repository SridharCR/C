/*
Traversal of a Tree - BFS Without Queue and Stack
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
     return (node);
}
int height(struct tree* node)
{
     if(node == NULL)
          return 0;
     else
    {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);
         /* use the larger one */
        if (lheight > rheight)
               return(lheight+1);
        else
               return(rheight+1);
    }

}
void printGivenLevel(struct tree* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}
void printLevelOrder(struct tree* node)
{
     int h = height(node);
     int i;
     for(i = 0;i <= h;i++)
          printGivenLevel(node, i);
}


int main(int argc, char const *argv[]) {
     struct tree* root = newnode(5);
     root -> left = newnode(4);
     root -> right = newnode(6);
     printLevelOrder(root);
     return 0;
}
