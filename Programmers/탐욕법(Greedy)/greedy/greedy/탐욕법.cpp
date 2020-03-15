#include <iostream>
#include <vector>
#include <set>
<<<<<<< HEAD

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
=======
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
>>>>>>> f1a339d78ac7156a51c45e477eb6143bcd4c85c6
	}

	return answer - lost_set.size();
}
int main() {

<<<<<<< HEAD
	std::vector<int> a = { };
	std::vector<int> b = {  };

	std::cout << solution(3, a, b);
=======
	std::vector<int> a = { 2,3,4 };
	std::vector<int> b = { 1,2,3,6 };

	std::cout << solution(7, a, b);


}
