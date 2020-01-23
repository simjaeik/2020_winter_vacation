#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int solution(int n, std::vector<int> lost, std::vector<int> reserve) {
	int answer = n;
	std::set<int> lost_set;
	std::set<int> reserve_set;

	std::sort(lost.begin(), lost.end());

	for (auto a : reserve)
		reserve_set.insert(a);

	for (auto a : lost)
		lost_set.insert(a);

	for (auto a : lost) {
		if (reserve_set.find(a) != reserve_set.end() && lost_set.find(a) != lost_set.end()) {
			reserve_set.erase(a);
			lost_set.erase(a);
		}
	}

	while (!lost.empty()) {

		if (reserve_set.find(lost.back() + 1) != reserve_set.end()) {// is exists
			reserve_set.erase(lost.back() + 1);
			lost_set.erase(lost.back());
		}
		else if (reserve_set.find(lost.back() - 1) != reserve_set.end()) {// is exists
			reserve_set.erase(lost.back() - 1);
			lost_set.erase(lost.back());
		}
		lost.pop_back();
	}

	return answer - lost_set.size();
}
int main() {

	std::vector<int> a = { 2,3,4 };
	std::vector<int> b = { 1,2,3,6 };

	std::cout << solution(7, a, b);

}