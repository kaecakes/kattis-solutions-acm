#include <iostream>

int main() {
    int n, T, s, total = 0, count = 0;
    std::cin >> n >> T;
    while (n > 0) {
        std::cin >> s;
        if (s + total <= T) {
            total += s;
            count++;
        } else {
            break;
        }
        n--;
    }
    std::cout << count;
    return 0;
}