//
// Created by chugang on 2020/6/10.
//
#include <iostream>

using namespace std;

size_t t_strlen(const char *str);

int main() {
    const char *str = "abc";
    size_t len = t_strlen(str);
    cout << len << endl;
    return 0;
}

size_t t_strlen(const char *str) {
    const char *s;
    for (s = str; *s; ++s) { cout << 1 << endl; }
    // todo s 永远是字符串*str的第一个字符
//    for (s = str; s; ++s) { cout << 1 << endl; }
    return (s - str);       // str是字符串开头，s是字符串结尾
}
