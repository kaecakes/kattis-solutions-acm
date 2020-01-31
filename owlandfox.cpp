#include <iostream>

using namespace std;

int find_sum(int num) {
	int sum = 0;
	while (num > 0) {
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int  n;
		cin >> n;
		int sum_n = find_sum(n);
		for (int j = (n - 1); j >= 0; j--) {
			int sum_x = find_sum(j);
			if ((sum_n - sum_x) == 1) {
				cout << j << endl;
				break;
			}
		}
	}

	return 0;
}
