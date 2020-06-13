//
// Created by chugang on 2020/6/13.
//
/**********
 * 递归实现遍历二叉树
 * 1.前序遍历：根左右
 * 2.中序遍历：左根右
 * 3.后序遍历：左右根
 * 使用引用传参在递归函数中返回数据。
 */
#include "Solution.h"

// 前序遍历：根左右
vector<int> Solution::preOrderTraverse(TreeNode *root) {
    vector<int> values;
    preOrderTraverse(root, values);
    return values;
}

void Solution::preOrderTraverse(TreeNode *root, vector<int> &values) {
    if (root == NULL) {
        return;
    }
    values.push_back(root->val);
    preOrderTraverse(root->left, values);
    preOrderTraverse(root->right, values);
}

// 中序遍历：左根右
vector<int> Solution::inOrderTraverse(TreeNode *root) {
    vector<int> result;
    inOrderTraverse(root, result);
    return result;
}

void Solution::inOrderTraverse(TreeNode *root, vector<int> &values) {
    if (root == NULL) {
        return;
    }
    inOrderTraverse(root->left, values);
    values.push_back(root->val);
    inOrderTraverse(root->right, values);
}

// 后序遍历:左右根
vector<int> Solution::postOrderTraverse(TreeNode *root) {
    vector<int> values;
    postOrderTraverse(root, values);
    return values;
}

void Solution::postOrderTraverse(TreeNode *root, vector<int> &values) {
    if (root == NULL) {
        return;
    }
    postOrderTraverse(root->left, values);
    postOrderTraverse(root->right, values);
    values.push_back(root->val);
}
