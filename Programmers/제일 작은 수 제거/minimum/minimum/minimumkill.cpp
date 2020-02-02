#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> solution(std::vector<int> arr) {
	std::vector<int> answer;

	arr.erase( std::find( arr.begin(), arr.end(), *std::min_element( arr.begin(), arr.end() ) ) );

	if (arr.empty())
		arr.push_back(-1);

	return arr;
}

int main() {
	std::vector<int> a = { 0,3,4,5,2,1 };
	solution(a);
}