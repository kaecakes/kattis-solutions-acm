#include <iostream>
#include <string>
#include <deque>

int main() {
    std::string input;
    std::deque<char> result;
    std::cin >> input;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] != '<') {
            result.push_back(input[i]);
        } else {
            result.pop_back();
        }
    }
    for (std::deque<char>::iterator it =
            result.begin(); it!=result.end(); ++it) {
        std::cout << *it;
    }
    return 0;
}