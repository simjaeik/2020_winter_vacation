#include<iostream>
#include<vector>
using namespace std;

int N, L, answer(0);
vector<pair<int, int>> ham;

void dfs(int sum, int tas, int depth) {

	if (sum > L) return;
	if (depth >= N) return;
	if (answer < tas) answer = tas;

	dfs(sum, tas, depth + 1);
	dfs(sum + ham[depth].second, tas + ham[depth].first, depth+1);

}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {

		cin >> N >> L;

		for (int i = 0; i < N; i++) {
			int taste, cal;
			cin >> taste >> cal;
			ham.push_back(make_pair(taste, cal));
		}

		dfs(0, 0, 0);

		printf("#%d %d\n", test_case, answer);

		answer = 0;
		ham.clear();
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
