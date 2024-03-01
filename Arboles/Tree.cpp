#include "Tree.h"

struct TreeNode* createNode(int value){
    struct TreeNode* newNode = (struct TreeNode*) malloc(sizeof (struct TreeNode));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* insert(struct TreeNode* root, int value){
    if(root == NULL){
        root = createNode(value);
    }else if(value <= root->value){
        root->left = insert(root->left, value);
    }else{
        root->right = insert(root->right, value);
    }
    return root;
}

void inOrderTraversal(struct TreeNode* root){
    if(root != NULL){
        inOrderTraversal(root->left);
        printf("%d", root->value);
        inOrderTraversal(root->right);
    }
}

void preOrderTraversal(struct TreeNode* root){
    if(root != NULL){
        printf("%d", root->value);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(struct TreeNode* root){
    if(root != NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d", root->value);
    }
}