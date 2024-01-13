#include <stdio.h>
#include <stdlib.h>

struct BST {
    int data;
    struct BST* left;
    struct BST* right;
};

struct BST* createNode(int value) {
    struct BST* newNode = (struct BST*)malloc(sizeof(struct BST));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void writePathRecursive(struct BST* tree, int value) {
    if (tree == NULL) {
        printf("Tree is empty. Cannot find path.\n");
        return;
    }

    printf("%d ", tree->data);

    if (value < tree->data) {
        writePathRecursive(tree->left, value);
    } else if (value > tree->data) {
        writePathRecursive(tree->right, value);
    } else {
        printf("\nNode with value %d already exists in the tree.\n", value);
        return;
    }
}

void writePath(struct BST* tree, int value) {
    printf("Path to insert %d: ", value);
    writePathRecursive(tree, value);
    printf("\n");
}

int main() {
    struct BST* root = createNode(15);
    root->left = createNode(10);
    root->right = createNode(20);
    root->left->left = createNode(8);
    root->left->right = createNode(12);
    root->right->left = createNode(17);
    root->right->right = createNode(25);

    writePath(root, 22);

    writePath(root, 12);

    return 0;
}