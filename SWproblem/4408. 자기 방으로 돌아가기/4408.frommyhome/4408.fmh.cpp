#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		int N, ans(0);
		cin >> N;

		vector<int> room(401, 0);

		for (int i = 0; i < N; i++) {
			int st, ed;
			cin >> st >> ed;
			if (st > ed) swap(st, ed);

			for (int j = st; j < ed; j++)
				room[j]++;
		}

		ans = *max_element(room.begin(), room.end());

		cout << "#" << test_case << " " << ans << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
// 미해결
