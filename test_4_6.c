//
// Created by 潘光伟 on 2022/4/6.
//
#include <stdlib.h>
#include "stdio.h"
//定义一个二叉树结构
typedef struct node {
    int data;
    struct node *lchild;
    struct node *rchild;
} Node;
//创建一个二叉树
Node *create_tree(Node *root) {
    int data;
    scanf("%d", &data);
    if (data == -1) {
        return NULL;
    }
    root = (Node *) malloc(sizeof(Node));
    root->data = data;
    root->lchild = create_tree(root->lchild);
    root->rchild = create_tree(root->rchild);
    return root;
}
//中序遍历
void in_order(Node *root) {
    if (root == NULL) {
        return;
    }
    in_order(root->lchild);
    printf("%d ", root->data);
    in_order(root->rchild);
}
//先序遍历
void pre_order(Node *root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    pre_order(root->lchild);
    pre_order(root->rchild);
}
//后序遍历
void post_order(Node *root) {
    if (root == NULL) {
        return;
    }
    post_order(root->lchild);
    post_order(root->rchild);
    printf("%d ", root->data);
}
//求二叉树的高度
int height(Node *root) {
    if (root == NULL) {
        return 0;
    }
    int lheight = height(root->lchild);
    int rheight = height(root->rchild);
    return lheight > rheight ? lheight + 1 : rheight + 1;
}
int main()
{
    Node *root = NULL;
    root = create_tree(root);
    in_order(root);
    printf("\n");

    return 0;
}
