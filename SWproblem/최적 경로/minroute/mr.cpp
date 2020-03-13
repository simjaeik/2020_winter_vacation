#include<iostream>
#include <ctype.h>

using namespace std;

int N, spot[12][2], d[12][12], order[12], chk[12], answer(0);

void dfs(int turn, int sum) {

	if (turn > N) {
		sum += d[order[turn - 1]][turn];
		if (answer == 0 || answer > sum) answer = sum;
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (chk[i] == 0) {
			if (answer != 0 && sum + d[order[turn - 1]][i] >= answer) continue;
			chk[i] = 1;
			order[turn] = i;
			dfs(turn + 1, sum + d[order[turn - 1]][i]);
			chk[i] = 0;
		}
	}

}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {

		cin >> N;

		cin >> spot[0][0] >> spot[0][1];
		cin >> spot[N + 1][0] >> spot[N + 1][1];

		for (int i = 1; i <= N; i++)
			cin >> spot[i][0] >> spot[i][1];

		for (int i = 0; i <= N; i++)
			for (int j = 1; j <= N + 1; j++) {
				d[i][j] = abs(spot[i][0] - spot[j][0]) + abs(spot[i][1] - spot[j][1]);
			}

		dfs(1, 0);

		cout << "#" << test_case << " " << answer << endl;
		answer = 0;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}