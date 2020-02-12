#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

bool is_number(string numbers, int a) {
	vector<int> cmp;
	int cnt = 0;
	int len = to_string(a).length();

	for (int i = 0; i < numbers.length(); i++)
		cmp.push_back(numbers[i] - '0');

	while (a != 0 && !cmp.empty()) {
		if (find(cmp.begin(), cmp.end(), a % 10) != cmp.end()) {
			cnt++;
			cmp.erase(find(cmp.begin(), cmp.end(), a % 10));
		}
		a /= 10;
	}

	return cnt == len ? true : false;

}

int solution(string numbers) {
	int answer = 0;
	vector<int> num(pow(10, numbers.length()));


	for (int i = 2; i * i < pow(10, numbers.length()); i++) {
		if (num[i] == 1)
			continue;
		for (int j = i + i; j < pow(10, numbers.length()); j += i)
			num[j] = 1;
	}

	for (int i = 2; i < pow(10, numbers.length()); i++) {
		if (num[i] == 0) {
			if (is_number(numbers, i)) {
				answer++;
				cout << i << endl;
			}
		}
	}

	return answer;
}

int main() {

	solution("17");
}