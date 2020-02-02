#include <string>
#include <vector>
#include <iostream>
using namespace std;

long long solution(long long n) {
	long long answer = 0;

	if (sqrt(n) - (int)sqrt(n) == 0) {
		answer = (sqrt(n) + 1) * (sqrt(n) + 1);
	}
	else
		answer = -1;

	return answer;
}

int main() {
	std::cout << solution(144);


	return 0;
}