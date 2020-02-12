#include <iostream>
#include <vector>

int main() {
	int n, s, r, count = 0;
	std::vector<int> damaged, reserve;
	bool team_saved = false;
	std::cin >> n >> s >> r;
	for (int i = 0; i < s; i++) {
		int x;
		std::cin >> x;
		damaged.push_back(x);
	}
	for (int i = 0; i < r; i++) {
		int x;
		std::cin >> x;
		reserve.push_back(x);
	}
	for (auto i : damaged) {
		for (auto j = 0; j < reserve.size(); j++) {
			if ((reserve[j] == i - 1) || (reserve[j] == i + 1)) {
				reserve[j] = 0;
				team_saved = true;
				break;
			}
		}
		if (team_saved != true) {
			count++;
		}
		team_saved = false;
	}
	std::cout << count;
}