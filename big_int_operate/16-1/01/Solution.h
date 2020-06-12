//
// Created by chugang on 2020/6/12.
//

#ifndef STUDY_ACM_CHEAT_SHEET_SOLUTION_H
#define STUDY_ACM_CHEAT_SHEET_SOLUTION_H

#include <string>
#include <vector>

using namespace std;

const int MAX_LEN = 201;

class Solution {
public:
    void run(string x, string y, string &z);

private:
    vector<int> bigint_add(int x[], int y[]);

    int x[MAX_LEN], y[MAX_LEN], z[MAX_LEN];

    int *bigint_input(string number);

    string bigint_print(vector<int> sum);
};


#endif //STUDY_ACM_CHEAT_SHEET_SOLUTION_H
