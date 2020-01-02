#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> heights);


int main() {

	std::vector<int> heights;
	std::vector<int> returns;
	
	heights.push_back(3);
	heights.push_back(1);
	heights.push_back(9);
	heights.push_back(3);
	heights.push_back(5);
	heights.push_back(7);
	heights.push_back(2);

	returns = solution(heights);

	for (int i : returns)
		printf("%d ", i);

	
}

std::vector<int> solution(std::vector<int> heights) {
	std::vector<int> answer;


	while (heights.size() > 1) {
		int position = 0;

		int top = *(heights.end() - 1);

		heights.pop_back();
		
		std::vector<int> tmp = heights;

		while (!tmp.empty()) {
			int comp = *(tmp.end() - 1);

			if (comp > top) {
				position = tmp.size();
				break;
			}
			tmp.pop_back();
		}

   		answer.push_back(position);

	}
	
	answer.push_back(0);

	std::reverse(answer.begin(), answer.end());

	return answer;
}