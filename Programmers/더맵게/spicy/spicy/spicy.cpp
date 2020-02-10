#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	priority_queue<int, vector<int>, greater<int>> q;

	for (auto a : scoville)
		q.push(a);

	while (q.top() < K && answer < 100000000) {

		if (q.size() < 2)
			return -1;

		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();

		q.push(a + b * 2);

		answer++;
	}

	if (answer >= 100000000)
		return -1;

	return answer;
}