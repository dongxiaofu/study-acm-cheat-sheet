//
// Created by chugang on 2020/6/15.
//
#include <iostream>
#include <string>

using namespace std;

string t_trim(string str);

class Solution {
public:
    bool isNumber(string s) {
        bool hasSign = false;
        bool hasE = false;
        bool hasDecimal = false;
        int len = s.length();
        if (len == 0) {
            return false;
        }
        string newStr = "";
        bool start = false;
        for (int i = 0; i < len; i++) {
            if (start == false && s[i] == ' ') continue;
            if (start == false) start = true;
            newStr += s[i];
        }
        len = newStr.length();
        int pos;
        for (int i = len - 1; i >= 0; i--) {
            if (newStr[i] != 32) {
                pos = i;
                break;
            }
        }
        string str2 = "";
        for (int i = 0; i <= pos; i++) {
            str2 += newStr[i];
        }
        s = str2;
        bool isStart = false;
        len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] == '\0') {
                continue;
            }
            //if((!hasDecimal || !isStart) && s[i] == ' ') continue;
            if (s[i] == '+' || s[i] == '-') {
                if (i == len - 1) return false;
                if (hasSign && s[i - 1] != 'E' && s[i - 1] != 'e') return false;
                if (i > 0 && s[i - 1] != 'E' && s[i - 1] != 'e') return false;
                hasSign = true;
            } else if (s[i] == 'E' || s[i] == 'e') {
                if (hasDecimal || hasE || i == len - 1 || i == 0) return false;
                hasE = true;
            } else if (s[i] == '.') {
                if (hasE || hasDecimal) return false;
                hasDecimal = true;
            } else if (s[i] < '0' || s[i] > '9') {
                return false;
            } else {
                isStart = true;
            }
        }
        if (isStart) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    double d = 46.e3;
    cout << d << endl;
    Solution solution;
    bool res = solution.isNumber("0e ");
    cout << res << endl;
//    string str = " hello   ";
//    string newStr = t_trim(str);
//    cout << newStr << "###" << endl;
    return 0;
}

string t_trim(string str) {
    int len = str.length();
    string newStr = "";
    bool start = false;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ' && start == false) continue;
        if (start == false) start = true;
        newStr += str[i];
    }
    len = newStr.size();
    int pos;
    for (int i = len - 1; i >= 0; i--) {
        char ch = newStr[i];
        if (ch != 32) {
//            newStr[i + 1] = '\0';
            pos = i;
            break;
        }
    }

    string str2 = "";
    for (int i = 0; i <= pos; i++) {
        str2 += newStr[i];
    }

    return str2;
}



