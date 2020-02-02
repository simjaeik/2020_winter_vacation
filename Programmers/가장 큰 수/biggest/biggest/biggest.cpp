#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

bool cmp(int a, int b) {
	std::string a_s = std::to_string(a);
	std::string b_s = std::to_string(b);

	std::cout << a_s << " " << b_s << std::endl;

	if (a_s.length() == b_s.length())
		return a > b;

	int len = std::min(a_s.length(), b_s.length());

	if (a_s.length() > b_s.length()) {
		a = a_s[len] - '0';
		b = b_s[0] - '0';
		a_s=a_s.substr(0, len);
	}
	else {
		b = b_s[len] - '0';
		a = a_s[0] - '0';
		b_s=b_s.substr(0, len);
	}
	std::cout << a_s << " -- " << b_s <<" "<< a << " " << b << std::endl;

	if (std::stoi(a_s) > std::stoi(b_s)) {
		std::cout << a_s << std::endl;
		return std::stoi(a_s) > std::stoi(b_s);
	}
	else if (std::stoi(a_s) < std::stoi(b_s)) {
		std::cout << b_s << std::endl;
		return std::stoi(a_s) < std::stoi(b_s);
	}
	std::cout << a << " " << b << std::endl;

	return a > b;

}

std::string solution(std::vector<int> numbers) {
	std::string answer = "";

	std::sort(numbers.begin(), numbers.end(), cmp);

	for (auto a : numbers)
		answer += std::to_string(a);

	return answer;
}

int main() {
	std::vector<int> a = { 3, 30, 34, 5, 9 };

	std::cout<<solution(a);
}