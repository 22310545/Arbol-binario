#include "Tree.h"

int main(){
    struct TreeNode* root = NULL;

    root = insert(root, 3);
    root = insert(root, 5);
    root = insert(root, 9);
    root = insert(root, 7);
    root = insert(root, 1);

    printf("Recorrido inOrder: ");
    inOrderTraversal(root);
    printf("\n");

    printf("Recorrido preOrder: ");
    preOrderTraversal(root);
    printf("\n");

    printf("Recorrido postOrder: ");
    postOrderTraversal(root);
    printf("\n");

    return 0;
}
