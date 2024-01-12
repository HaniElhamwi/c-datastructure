
#include <stdio.h>
#include <stdlib.h>




struct node {
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int height(struct node *N){
    if(N == NULL){
        return 0;
    }
    return N->height;
}


int getBalance(struct node *N){
    if(N == NULL){
        return 0;
    }
    return height(N->left) - height(N->right);
}

// max

int max(int a, int b){
    return (a > b) ? a : b;
}



struct node *leftRotate(struct node *x){
    struct node *y = x->right;
    struct node *T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = 1 + max(height(x->left), height(x->right));
    y->height = 1 + max(height(y->left), height(y->right));
    return y;
}

// right rotate

struct node *rightRotate(struct node *y){
    struct node *x = y->left;
    struct node *T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));
    return x;
}

struct node *inOrder(struct node *x){
    
}



struct node *insert(struct node *root, int data){
    if(root == NULL){
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        temp->height = 0;
        return temp;
    }
    if(data < root->data){
        root->left = insert(root->left, data);
    }
    else if(data > root->data){
        root->right = insert(root->right, data);
    }
    else{
        return root;
    }
    root->height = 1 + max(height(root->left), height(root->right));
    int balance = getBalance(root);
    if(balance > 1 && data < root->left->data){
        return rightRotate(root);
    }
    if(balance < -1 && data > root->right->data){
        return leftRotate(root);
    }
    if(balance > 1 && data > root->left->data){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if(balance < -1 && data < root->right->data){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}


void printTree(struct node *tree){
    if(tree == NULL){
        return;
    }
    printTree(tree->left);
    printf("%d ", tree->data);
    printTree(tree->right);
}


int main(){
    struct node *root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, -1);


    printf("height %d" , root->height);

    // printTree(root);
    return 0;
}