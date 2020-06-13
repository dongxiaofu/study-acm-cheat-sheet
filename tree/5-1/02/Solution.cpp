//
// Created by chugang on 2020/6/13.
//
/*
 * 遍历二叉树，非递归实现。
 */
#include "Solution.h"

vector<int> Solution::preOrderTraverse(TreeNode *root) {
    vector<int> values;
    if (root == NULL) {
        return values;
    }
    TreeNode *p = root;
    stack<TreeNode *> stack1;
    stack1.push(p);

    while (!stack1.empty()) {
        TreeNode *top = stack1.top();
        stack1.pop();
        if (top == NULL) {
            continue;
        }
        values.push_back(top->val);

        stack1.push(top->right);
        stack1.push(top->left);
    }

    return values;
}
