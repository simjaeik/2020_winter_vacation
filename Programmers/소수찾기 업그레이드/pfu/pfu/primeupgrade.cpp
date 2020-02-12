#include <string>
#include <vector>

using namespace std;

int solution(string numbers) {
	int answer = 0;
	vector<int> num(numbers.length() + 1);


	for (int i = 2; i * i <= n; i++) {
		if (num[i] == 1)
			continue;
		for (int j = i + i; j <= n; j += i)
			num[j] = 1;
	}

	for (int a : num) {
		if (a == 0) {


		}
	}

	return answer;
}