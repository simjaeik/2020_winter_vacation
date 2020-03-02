#include <string>
#include <vector>
#include <iostream>

using namespace std;
int answer = 0;

void get_answer( vector<int> numbers, int target, int now, int sum ) {

	if (now >= numbers.size()) {
		if (sum == target) {
			answer++;
			return ;
		}
		return ;
	}
	else {
		get_answer(numbers, target, now + 1, sum + numbers[now]);
		get_answer(numbers, target, now + 1, sum - numbers[now]);
	}
}

int solution(vector<int> numbers, int target) {

	get_answer(numbers, target, 1, -numbers[0]);
	get_answer(numbers, target, 1, numbers[0]);

	return answer;
}

int main() {
	vector<int> num = { 1,1,1,1,1 };

	//cout << solution(num, 3);

	int size = 3 << num.size();
	cout << size;

}