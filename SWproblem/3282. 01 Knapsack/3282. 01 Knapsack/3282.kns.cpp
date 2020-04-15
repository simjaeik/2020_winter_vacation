#include<iostream>
#include <vector>

using namespace std;

int N, K, ans(0);
vector<pair<int, int>> bags;

void solve(int cnt, int v, int c) {

	if (v>K) {
		int pv = v - bags[cnt - 1].first;
		int pc = c - bags[cnt - 1].second;

		if (pv <= K) {
			if (ans == 0)
				ans = pc;
			else if (ans < pc)
				ans = pc;
		}
		return;
	}

	if (cnt >= N) {
		if (ans < c)
			ans = c;
		return;
	}

	solve(cnt + 1, v + bags[cnt].first, c + bags[cnt].second);
	solve(cnt + 1, v, c);

}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> K;
		ans = 0;

		bags.clear();
		for (int i = 0; i<N; i++) {
			int n1, n2;
			cin >> n1 >> n2;
			bags.push_back(make_pair(n1, n2));
		}

		solve(0, 0, 0);

		cout << "#" << test_case << " " << ans << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}