#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int ans = 0;
	int num = n / 2;
	int tmp = num;
	int sum = num;

	while (tmp != 0) {
		sum += tmp % 10;
		tmp /= 10;
	}

	while (sum != n && num < n) {
		num++;
		tmp = num;
		sum = num;
		while (tmp != 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
	}

	if (num != n)
		ans = num;

	cout << ans;
}