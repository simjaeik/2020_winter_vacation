#include <iostream>
#include <vector>
#include <set>

int solution(int n, std::vector<int> lost, std::vector<int> reserve) {
	int answer = n;
	std::vector<int> lost_compare = lost;
	std::set<int> reserve_set;

	for (auto a : reserve)
		reserve_set.insert(a);
		
	while (!lost_compare.empty()) {

		if (reserve_set.find(lost_compare.back() + 1) != reserve_set.end()) {// is exists
			reserve_set.erase(lost_compare.back() + 1);
			lost.pop_back();
		}
		else if (reserve_set.find(lost_compare.back() - 1) != reserve_set.end()) {// is exists
			reserve_set.erase(lost_compare.back() - 1);
			lost.pop_back();
		}
		lost_compare.pop_back();
	}

	return answer - lost.size();
}
int main() {

	std::vector<int> a = { };
	std::vector<int> b = {  };

	std::cout << solution(3, a, b);

}