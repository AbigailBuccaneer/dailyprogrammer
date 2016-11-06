#include <algorithm>
#include <iostream>
#include <sstream>
#include <fstream>

bool is_kaprekar_number(int X, int base = 10) {
    if (X == 1) return true;
    for (int n = 1; n <= (X * X); n *= base) {
        int A = (X * X) / n;
        int B = (X * X) % n;
        if (B != 0 && X == A + B) return true;
    }
    return false;
}

int main() {
    std::string line;
    int min;
    int max;
    while (std::getline(std::cin, line) && std::stringstream(line) >> min >> max) {
        bool first_on_line = true;
        for (int X = min; X <= max; ++X) {
            if (is_kaprekar_number(X)) {
                if (first_on_line) {
                    first_on_line = false;
                }
                else {
                    std::cout << ' ';
                }
                std::cout << X;
            }
        }
        std::cout << '\n';
    }
    return 0;
}
