#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data){
    struct node *new = malloc(sizeof(struct node));
    new->data  = data;
    new->left =  NULL;
    new->right = NULL;
    return new; 
}

int main(){

 struct node *t1 = newNode(12);
 
 struct node *root = newNode(1);
 root->left = newNode(2);
 root->right = newNode(3);
 root->left->left = newNode(4);
 root->left->right = newNode(5);
 root->right->left =newNode(6);
 root->right->right =newNode(7);


printf("%d" , root->data);

    return 1;
}