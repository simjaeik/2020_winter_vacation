#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int num;

bool cmp(const std::string a, const std::string b) {
	if (a[num] == b[num])
		return a < b;

	return a[num] < b[num];
}

std::vector<std::string> solution(std::vector<std::string> strings, int n) {
	std::vector<std::string> answer = strings;
	num = n;

	std::sort(answer.begin(), answer.end(), cmp);

	return answer;
}


int main() {
	std::vector< std::string> a = { "sun","bed","car" };

	a = solution(a, 1);

	for (auto b : a)
		std::cout << b << std::endl;
}