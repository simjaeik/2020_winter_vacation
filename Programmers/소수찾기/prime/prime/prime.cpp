#include <string>
#include <vector>
#include <iostream>

int solution(int n) {
	int answer = 0;
	std::vector<int> num(n+1);

	for (int i = 2; i * i <= n; i++) {
		if (num[i] == 1)
			continue;
		for (int j = i + i; j <= n; j += i) 
			num[j] = 1;
	}

	for (int a : num) 
		if (a == 0)
			answer++;
	
	return answer;
}

int main() {

	std::cout << solution(10);
}