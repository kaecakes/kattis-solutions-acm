#include <algorithm>
#include <iostream>
#include <vector>

bool compare_sub(std::string lhs, std::string rhs) {
    return lhs.substr(0, 2) < rhs.substr(0, 2);
}

int main() {
    int n;
    std::cin >> n;
    while (n) {
        std::vector<std::string> user_names;
        for (auto i = 0; i != n; i++) {
            std::string(name);
            std::cin >> name;
            user_names.push_back(name);
        }
        std::stable_sort(user_names.begin(), user_names.end(), compare_sub);
        for (auto i : user_names) {
            std::cout << i << std::endl;
        }
        std::cin >> n;
    }
}