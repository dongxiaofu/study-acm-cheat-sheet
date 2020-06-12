//
// Created by chugang on 2020/6/12.
//
/**
 * 大整数相加，未优化。
 * 思路：
 * 1.将大整数的每一位存储到数组中。"432"存储到数组x中,[2,3,4]，"111"存储到数组y中，[1,1,1]。
 * 2.将x和y的对应位置的元素相加，如果和sum大于10，那么，当前位置保留(sum-10)，下一个位置next+1。
 * 3.将结果数组，逆向输出。假如z中，[3,4,5]，那么，输出的数据是：543。
 * 3.1.如果z的最高位是0，丢弃；遇到第一个非0元素后，输出所有元素。
 * 3.2.补充3.1，遇到第一个非0元素前，丢弃0。
 * 常识：
 * 1.'0' + 5 == '5'
 * 2.'5' - '0' = 5
 */
#include "Solution.h"

void Solution::run(string x, string y, string &z) {
    int *x1 = bigint_input(x);
    int *y1 = bigint_input(y);
    vector<int> sum = bigint_add(x1, y1);
    z = bigint_print(sum);
}

// 没有使用中间变量存储和，直接将和存储在x。
vector<int> Solution::bigint_add(int *x, int *y) {
    for (int i = 0; i < MAX_LEN; i++) {
        x[i] += y[i];
        // 大于等于10，向前进位，只留下减去10后的差；
        if (x[i] >= 10) {
            x[i] = x[i] - 10;
            x[i + 1]++;     // <===> x[i+1] = x[i+1] + 1;
        }
    }
    vector<int> result(x, x + MAX_LEN);
    return result;
}

int *Solution::bigint_input(string number) {
    int *result = new int[MAX_LEN];     // 用函数返回值，必须如此。需在函数外释放内存，很不好，需要了解函数内部。
    memset(result, 0, sizeof(int) * MAX_LEN);
    int size = number.size();
    int j = 0;
    for (int i = size - 1; i >= 0; i--) {
        // 将字符转为数字（非字符对应的ascii码，而是等价数字。字符相减，是它们的ascii码相减。
        result[j++] = number[i] - '0';
    }
    return result;
}

// '5' - '0' == 5 与 5 + '0' == '5' 是逆向运算。
string Solution::bigint_print(vector<int> sum) {
    string result = "";
    int size = sum.size();
    bool start = false;
    for (int i = size - 1; i >= 0; i--) {
        if (start) {
            // 将数字转为它对应的字符形式（非ascii码值），比如，整型5对应的字符形式'5'。
            // '0' + 5，值是'5'的ascii码
            result += sum[i] + '0';
        } else if (sum[i] != 0) {
            result += sum[i] + '0';
            start = true;
        }
    }
    // 有问题，把所有的0都去掉了
//    for (int i = size - 1; i >= 0; i--) {
//        if (sum[i] == 0) {
//            continue;
//        }
//        result += sum[i] + '0';
//    }
    return result;
}