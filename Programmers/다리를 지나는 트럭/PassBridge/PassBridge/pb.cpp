#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	queue<int> q;

	int sum = 0;
	int seq = 0;
	int prev = 0;
	for (auto a : truck_weights) {
		if (sum + a <= weight && q.size() < bridge_length) {
			q.push(seq++);
			answer++;
		}
		else {
			if (q.front() - prev == 1) {
				seq++;
				sum -= q.front();
			}
			seq += bridge_length - q.size() + 1;
			sum -= q.front();
			q.pop();
		}
	}
	answer += bridge_length;


	return answer;
}