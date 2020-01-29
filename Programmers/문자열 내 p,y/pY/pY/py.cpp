#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

bool cmp(char a, char b) {
	return a > b;
}

std::string solution(std::string s) {
	std::vector<char> answer;

	for (int i = 0; i < s.length(); i++)
		answer.push_back(s[i]);

	std::sort(answer.begin(), answer.end());

	s = "";
	for (auto a : answer)
		s += a;

	return s;
}

int main() {

	std::cout << solution("gfedcbZ");
}