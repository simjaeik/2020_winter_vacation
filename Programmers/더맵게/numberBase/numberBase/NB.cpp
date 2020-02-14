#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool is_out(int guess, int answer, int strike, int ball) {
	int g_b = 0, g_s = 0;
	vector<int> filter;
	vector<int> a, b;

	while (answer != 0) {
		filter.push_back(guess % 10);
		if (guess % 10 == 0) return false;
		if (guess % 10 == answer % 10) {
			g_s++;
			guess /= 10; answer /= 10;
			continue;
		}
		a.push_back(guess % 10);
		b.push_back(answer % 10);
		guess /= 10; answer /= 10;
	}

	sort(filter.begin(), filter.end());
	if (unique(filter.begin(), filter.end()) != filter.end()) return false;

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++)
			if (a[i] == b[j])
				g_b++;
	}

	return g_s == strike && g_b == ball ? true : false;
}

int solution(vector<vector<int>> baseball) {
	int answer = 0;

	for (int i = 111; i < 1000; i++) {
		int count = 0;
		for (auto a : baseball)
			if (is_out(i, a[0], a[1], a[2])) {
				count++;
			}
		if (count == baseball.size())
			answer++;
	}

	return answer;
}