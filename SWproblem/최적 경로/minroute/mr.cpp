#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int start[2], home[2];
bool cmp(pair<int, int> a, pair<int, int> b) {

	double dis1 = abs(a.first - start[0]) + abs(a.second - start[1]);
	double dis2 = abs(b.first - start[0]) + abs(b.second - start[1]);

	return dis1 < dis2;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){

		int N, answer(0);
		cin >> N;
		
		vector<pair<int, int>> spot;

		cin >> start[0] >> start[1];
		cin >> home[0] >> home[1];

		for (int i = 0; i < N; i++){
			int x, y;
			cin >> x >> y;
			spot.push_back(make_pair(x, y));
		}
		
		while (!spot.empty()) {
			sort(spot.begin(), spot.end(), cmp);
			
			auto firs = spot[0];
			spot.erase(spot.begin());

			answer += abs(start[0] - firs.first) + abs(start[1] - firs.second);

			start[0] = firs.first;
			start[1] = firs.second;
		}
		
		cout << "#" << test_case << " " << answer << endl;


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}