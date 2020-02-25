#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, m, completed = 0;
    std::cin >> n >> m;
    std::vector<int> task(n), quiet(m);
    for (int i = 0; i < n; i++) {
        std::cin >> task[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> quiet[i];
    }
    std::sort(task.begin(), task.end());
    std::sort(quiet.begin(), quiet.end());
    int i = 0, j = 0;
    while (i != n && j != m) {
        if (task[i] <= quiet[j]) {
            completed++;
            i++;
        }
        j++;
    }
    std::cout << completed;
}