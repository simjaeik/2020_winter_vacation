#include <string>
#include <vector>
#include <algorithm>
#include<iostream>

using namespace std;

vector<int> solution(int brown, int red) {
	vector<int> answer;
	int x, y;
	brown -= 4;

	for (int i = 1; i * i <= red; i++) {
		x = red / i;
		y = i;

		int chk = x * 2 + y * 2 + 4;
		if (brown == chk)
			break;
	}
	if (x < y)
		swap(x, y);

	answer.push_back(x + 2);
	answer.push_back(y + 2);

	return answer;
}

int main() {

	vector<int> a = solution(5000, 2000000);
	for (auto b : a)
		cout << b <<" ";
}