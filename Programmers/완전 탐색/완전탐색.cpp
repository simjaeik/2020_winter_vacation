#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> solution(std::vector<int> answers) {
	std::vector<int> answer;
	std::vector<int> sp1 = { 1,2,3,4,5 };
	std::vector<int> sp2 = { 2,1,2,3,2,4,2,5 };
	std::vector<int> sp3 = { 3,3,1,1,2,2,4,4,5,5 };

	std::vector<int> score = { 0,0,0 };

	for (int i = 0; i < answers.size(); i++) {
		if (answers[i] == sp1[i % sp1.size()])
			score[0]++;
		if (answers[i] == sp2[i % sp2.size()])
			score[1]++;
		if (answers[i] == sp3[i % sp3.size()])
			score[2]++;
	}

	int max = *std::max_element(score.begin(), score.end());

	for (int i = 0; i < 3; i++)
		if (score[i] == max)
			answer.push_back(i + 1);

	return answer;
}

int main() {

	std::vector<int> ans = { 1,2,3,4,5 };

	std::vector<int> tmp = solution(ans);

	for (int a : tmp)
		std::cout << a<<" ";

	return 0;
}