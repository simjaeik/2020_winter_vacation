#include <iostream>
#include <algorithm>
#include <vector>

int solution(int A, int B) {
	int x = A * B;
	int count = 0;

	while (x != 0) {
		if (x % 2 == 1)
			count++;
		x /= 2;
	}

	return count;
}

int main() {

	std::cout << solution(3, 7);
}