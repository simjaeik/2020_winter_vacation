#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

bool cmp(const std::string& a, const std::string& b) {
	if (b + a < a + b)
		return true;
	return false;
}

std::string solution(std::vector<int> numbers) {
	std::string answer = "";
	std::vector<std::string> str;

	for (auto a : numbers)
		str.push_back(std::to_string(a));

	std::sort(str.begin(), str.end(), cmp);

	for (auto a : str)
		answer += a;

	if (answer[0] == '0')
		return "0";

	return answer;
}

int main() {
	std::vector<int> a = {0, 0, 0 };

	std::cout<<solution(a);

}