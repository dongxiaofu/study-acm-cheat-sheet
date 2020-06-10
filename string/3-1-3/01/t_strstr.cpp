//
// Created by chugang on 2020/6/10.
//
#include <iostream>

using namespace std;

char *t_strstr(const char *haystack, const char *needle);

int main() {
    const char *haystack1 = "hello,world";
    const char *needle1 = "world";
    char *result1 = t_strstr(haystack1, needle1);
    cout << result1 << endl;

    const char *haystack2 = "hello,world";
    const char *needle2 = "wor2ld";
    char *result2 = t_strstr(haystack2, needle2);
    if (result2 == NULL) {
        cout << "empty" << endl;
    } else {
        cout << result2 << endl;
    }


    return 0;
}

char *t_strstr(const char *hasystack, const char *needle) {
    const char *p, *k, *pos;
    for (p = hasystack; *p; ++p) {
        pos = p;
        for (k = needle; *k; ++k) {
            if (*k != *p) {
                break;
            }
            ++p;
        }
        if (*k == '\0') {
            return (char *) pos;
        }
    }

    return NULL;
}
