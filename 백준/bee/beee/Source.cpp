#include <iostream>

using namespace std;

int main() {
	long long N;
	cin >> N;

	int num = 0;
	int answer = 0;
	while (num < N) {
		num = 3 * answer * answer + 3 * answer + 1;
		answer++;
	}
	cout << answer << endl;
}