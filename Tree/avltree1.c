#include <stdio.h>
#include <stdlib.h>
struct node
{
     int key;
     struct node* left;
     struct node* right;
     int height;
};
struct node* newnode(int data)
{
     struct node* nod = (struct node*)malloc(sizeof(struct node));
     nod -> key = data;
     nod -> left = NULL;
     nod -> right = NULL;
     nod -> height = 1;
     return nod;
}
int max(int a, int b)
{
     return a > b? a : b;
}
int getHeight(struct node * m)
{
     if(m == NULL)
          return 0;
     return m -> height;
}
int getBalance(struct node* tree)
{
     if(tree == NULL)
          return 0;
     return getHeight(tree -> left) - getHeight(tree -> right);
}
void printInorder(struct node* tree)
{
     if(tree == NULL)
          return;
     printInorder(tree -> left);
     printf("%d\t", tree -> key);
     printInorder(tree -> right);
}
struct node* rightRotate(struct node* a)
{
     struct node* b = a -> left;
     struct node* c = b -> right;
     //Perform rotation
     b -> right = a;
     a -> left = c;
     //Update heights
     a -> height = max(getHeight(a -> left), getHeight(a -> right))+1;
     b -> height = max(getHeight(b -> left), getHeight(b -> right))+1;
     return b;
}
struct node* leftRotate(struct node* a)
{
     struct node* b = a -> right;
     struct node* c = b -> left;
     //Perform rotation
     b -> left = a;
     a -> right = c;
     //Update heights
     a -> height = max(getHeight(a -> left), getHeight(a -> right))+1;
     b -> height = max(getHeight(b -> left), getHeight(b -> right))+1;
     return b;
}
struct node* insert(struct node* nod, int key)
{
     //Perform normal BST insertion
     if(nod == NULL)
          return newnode(key);
     if(key < nod -> key)
          nod -> left = insert(nod -> left, key);
     else if(key > nod -> key)
          nod -> right = insert(nod -> right, key);
     else
          return nod;
     //Update the heights of the ancestor node
     nod -> height = max(getHeight(nod -> left), getHeight(nod -> right)) + 1;
     int balance = getBalance(nod);
     // If this node becomes unbalanced, then
     // there are 4 cases
     // Left Left Case
     if (balance > 1 && key < nod->left->key)
         return rightRotate(nod);
     // Right Right Case
     if (balance < -1 && key > nod->right->key)
         return leftRotate(nod);
     // Left Right Case
     if (balance > 1 && key > nod->left->key)
     {
         nod->left =  leftRotate(nod->left);
         return rightRotate(nod);
     }
     // Right Left Case
     if (balance < -1 && key < nod->right->key)
     {
         nod->right = rightRotate(nod->right);
         return leftRotate(nod);
     }
     /* return the (unchanged) node pointer */
     return nod;
     }
int main(int argc, char const *argv[]) {
     struct node *root = NULL;

     /* Constructing tree given in the above figure */
     root = insert(root, 10);
     root = insert(root, 20);
     root = insert(root, 30);
     root = insert(root, 40);
     root = insert(root, 50);
     root = insert(root, 25);
     printInorder(root);
     //printf("\n%d\n", getBalance(tree));
     //printInorder(leftRotate(tree));
     return 0;
}
