//
// Created by chugang on 2020/6/10.
//
#include <iostream>

using namespace std;

char *t_strcpy(char *to, const char *from);

int main() {
//    char *to = NULL;
//    char *from = "abc";
//    t_strcpy(to, from);
//    cout << to << endl;

    char *to;
    char from[3] = {'a', 'b', 'c'};
    t_strcpy(to, from);
    cout << to << endl;
    return 0;
}

char *t_strcpy(char *to, const char *from) {
    assert(to != NULL && from != NULL);
    char *p = to;
    while ((*p++ = *from++) != '\0') {}
    return to;
}
