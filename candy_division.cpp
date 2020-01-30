#include <iostream>
#include <cmath>
#include <set>

int main() {
    long long n;
    std::set<long long> guests;
    std::cin >> n;
    for (auto i = 1; i <= sqrt(n) + 2; i++) {
        if (n % i == 0) {
            guests.insert(i);
            guests.insert(n/i);
        }
    }

    for (auto i : guests) {
        std::cout << i - 1 << " ";
    }

    return 0;
}