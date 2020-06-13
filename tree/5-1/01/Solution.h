//
// Created by chugang on 2020/6/13.
//

#ifndef STUDY_ACM_CHEAT_SHEET_SOLUTION_H
#define STUDY_ACM_CHEAT_SHEET_SOLUTION_H

#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> preOrderTraverse(TreeNode *root);

    vector<int> inOrderTraverse(TreeNode *root);

    vector<int> postOrderTraverse(TreeNode *root);

private:
    void preOrderTraverse(TreeNode *root, vector<int> &values);

    void inOrderTraverse(TreeNode *root, vector<int> &values);

    void postOrderTraverse(TreeNode *root, vector<int> &values);
};


#endif //STUDY_ACM_CHEAT_SHEET_SOLUTION_H
