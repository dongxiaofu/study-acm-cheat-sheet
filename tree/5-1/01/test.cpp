//
// Created by chugang on 2020/6/13.
//
#include <iostream>
#include "Solution.h"

void print_vector(vector<int> arr);

int main() {
    Solution solution;

    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);

    node1->left = node2;
    node1->right = node3;

    node4->left = node1;

    vector<int> values = solution.preOrderTraverse(node4);
    print_vector(values);

    vector<int> values2 = solution.inOrderTraverse(node4);
    print_vector(values2);

    vector<int> values3 = solution.postOrderTraverse(node4);
    print_vector(values3);

    return 0;
}

void print_vector(vector<int> arr) {
    int len = arr.size();
    for (int i = 0; i < len; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}
