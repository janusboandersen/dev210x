#include "../lib/std_lib_facilities.h"

int main() {
    constexpr int alphabet_len = 26;

    for (int i = 0; i < 2*alphabet_len; ++i) {
        cout << int('A' + i) << '\t' << char('A'+ i) << '\n';
    }
}
