#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>

struct TreeNode{
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int value);
struct TreeNode* insert(struct TreeNode* root, int value);
void inOrderTraversal(struct TreeNode* root);
void preOrderTraversal(struct TreeNode* root);
void postOrderTraversal(struct TreeNode* root);

#endif
