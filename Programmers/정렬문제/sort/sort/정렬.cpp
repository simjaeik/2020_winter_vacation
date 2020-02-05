#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> array, std::vector<std::vector<int>> commands) {
	std::vector<int> answer;


	for (auto com : commands) {

		std::vector<int> tmp(array.begin() + com[0] - 1, array.begin() + com[1]);
		std::sort(tmp.begin(), tmp.end());

		answer.push_back(tmp[com[2] - 1]);
	}

	return answer;
}

int main() {
	std::vector<int> a = { 1,5,2,6,3,7,4 };
	std::vector<std::vector<int>> b = { {2,5,3},{4,4,1},{1,7,3} };

	solution(a, b);

}