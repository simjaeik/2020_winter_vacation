#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;

int d[100][100];
int solution(int n, vector<vector<int>> costs) {
	int answer = 0;
	map<int, vector<pair<int, int>>> costmap;
	vector<bool> visited(n);

	for (auto a : costs) {
		costmap[a[0]].push_back(make_pair(a[2], a[1]));
		costmap[a[1]].push_back(make_pair(a[2], a[0]));
	}

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> tries;
	visited[0] = true;

	for (auto a : costmap[0]) {
		tries.push(a);
	}

	while (!tries.empty()) {

		auto tmp = tries.top();
		tries.pop();

		if (visited[tmp.second] == false) {
			visited[tmp.second] = true;
			answer += tmp.first;
			for (auto a : costmap[tmp.second]) {
				tries.push(a);
			}
		}
	}

	return answer;
}