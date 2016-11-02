#include <iostream>
#include <sstream>
#include <type_traits>

template<typename M, typename N>
constexpr std::common_type_t<M, N> gcd(M m, N n) {
    return n ? gcd(n, m % n) : m;
};

int main() {
    std::string line;
    int m;
    int n;
    while (std::getline(std::cin, line) && std::stringstream(line) >> m >> n) {
        int divisor = gcd(m, n);
        std::cout << m / divisor << ' ' << n / divisor << '\n';
    }
}
