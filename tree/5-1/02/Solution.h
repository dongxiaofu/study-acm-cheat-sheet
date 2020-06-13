//
// Created by chugang on 2020/6/13.
//

#ifndef STUDY_ACM_CHEAT_SHEET_SOLUTION_H
#define STUDY_ACM_CHEAT_SHEET_SOLUTION_H

#include <vector>
#include <stack>

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
};


#endif //STUDY_ACM_CHEAT_SHEET_SOLUTION_H
