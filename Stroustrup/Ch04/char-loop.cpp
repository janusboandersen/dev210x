#include "../lib/std_lib_facilities.h"

int main() {
    constexpr int alphabet_len = 26;
    int i {0};
    while (i < alphabet_len) {
        cout << int('a' + i) << '\t' << char('a'+ i) << '\n';
        ++i;
    }
}
