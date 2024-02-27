
#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new binary tree node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to find the height of a binary tree
int height(struct Node* root) {
    if (root == NULL)
        return 0;
    else {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
    }
}

// Function to print leaf nodes of a binary tree
void printLeafNodes(struct Node* root) {
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        printf("%d ", root->data);

    printLeafNodes(root->left);
    printLeafNodes(root->right);
}

int main() {
    // Creating a sample binary tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Finding and printing the height of the tree
    printf("Height of the tree: %d\n", height(root));

    // Printing the leaf nodes of the tree
    printf("Leaf nodes: ");
    printLeafNodes(root);

    return 0;
}
