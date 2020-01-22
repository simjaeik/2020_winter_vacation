#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int solution(int n, std::vector<int> lost, std::vector<int> reserve) {
	int answer = n;

	//std::reverse(lost.begin(), lost.end());
	//std::reverse(reserve.begin(), reserve.end());

	for (auto a : lost) {

		for (auto b : reserve) {
			if (a == b - 1 || a == b + 1) {	// can borrow
				reserve.erase(reserve.begin(), reserve.begin() + 1);
				lost.erase(lost.begin(), lost.begin() + 1);
				continue;
			}
			else if (b < a - 1) {
				reserve.erase(reserve.begin(), reserve.begin() + 1);
			}
			else if (b > a + 1)
				break;
		}
	}

	return answer - lost.size();
}
int main() {

	std::vector<int> a = { 2,4 };
	std::vector<int> b = { 1,3,5 };

	std::cout << solution(5, a, b);

}hi