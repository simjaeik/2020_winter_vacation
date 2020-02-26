#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

	int T;
	cin >> T;

	for (int Tc = 1; Tc <= T; Tc++) {
		int n, m, sum = 0, place = 0;
		cin >> n >> m;

		vector<int> park;
		vector<pair<int, int>> car_status;
		queue<int> q;
		priority_queue<int, vector<int>, greater<int>> empty;

		for (int i = 0; i < n; i++) {
			int fee;
			cin >> fee;
			park.push_back(fee);
			empty.push(i);
		}
		for (int i = 0; i < m; i++) {
			int car;
			cin >> car;
			car_status.push_back(make_pair(car, -1));
		}

		for (int i = 0; i < m * 2; i++) {

			int car;
			cin >> car;

			if (car > 0) {

				if (empty.empty()) {
					q.push(car - 1);
					continue;
				}

				int space = empty.top();
				sum += park[space] * car_status[car - 1].first;
				car_status[car - 1].second = space;
				empty.pop();

			}
			else {

				car = car * -1 - 1;
				empty.push(car_status[car].second);
				car_status[car].second = -1;

				if (!q.empty()) {
					int space = empty.top();
					sum += park[space] * car_status[q.front()].first;
					q.pop();
					empty.pop();
				}
			}
		}

		cout << "#" << Tc << " " << sum << endl;
	}
}