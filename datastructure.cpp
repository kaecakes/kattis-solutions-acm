#include <iostream>
#include <stack>
#include <queue>

int main() {
    int n;
    while (std::cin >> n) {
        bool is_stack = true, is_queue = true, is_priority = true;
        std::stack<int> s;
        std::queue<int> q;
        std::priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            int command, integer;
            std::cin >> command >> integer;
            if (command == 1) {
                s.push(integer);
                q.push(integer);
                pq.push(integer);
            } else {
                if (is_stack) {
                    if (s.empty() || integer != s.top()) {
                        is_stack = false;
                    } else s.pop();
                }
                if (is_queue) {
                    if (q.empty() || integer != q.front()) {
                        is_queue = false;
                    } else q.pop();
                }
                if (is_priority) {
                    if (pq.empty() || integer != pq.top()) {
                        is_priority = false;
                    } else pq.pop();
                }
            }
        }
        if (!is_stack && !is_queue && !is_priority) {
            std::cout << "impossible\n";
        } else if (is_stack && is_queue ||
                   is_queue && is_priority ||
                   is_priority && is_stack) {
            std::cout << "not sure\n";
        } else if (is_stack) {
            std::cout << "stack\n";
        } else if (is_queue) {
            std::cout << "queue\n";
        } else {
            std::cout << "priority queue\n";
        }
    }
}