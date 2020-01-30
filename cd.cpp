#include <iostream>
#include <unordered_set>

int main() {
    int n, m;
    std::cin >> n >> m;
    while (n && m) {
        int count = 0;
        std::unordered_set<int> cd;
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            cd.insert(x);
        }
        for (int i = 0; i < m; i++) {
            int x;
            std::cin >> x;
            if (cd.count(x)) {
                count++;
            }
        }
        std::cout << count << std::endl;
        std::cin >> n >> m;
    }
}