#include <iostream>

long long convert (long long num) {
    long long count = 0;
    for (int i = 0; num > 0; i++) {
        if (num % 2 == 1) {
            count++;
        }
        num /= 2;
    }
    return count;
}

int main() {
    long long testcases;
    std::cin >> testcases;
    for (int i = 0; i < testcases; i++) {
        long long s;
        std::cin >> s;
        std::string str_s, str_t;
        str_s = std::to_string(s);
        str_t = str_s[0];
        long long t;
        t = std::stoi(str_t);
        long long max = convert(t);
        for (int j = 1; j < str_s.length(); j++) {
            long long length;
            str_t += str_s[j];
            t = std::stoi(str_t);
            length = convert(t);
            if (length > max) {
                max = length;
            }
        }
        std::cout << max << std::endl;
    }
	return 0;
}