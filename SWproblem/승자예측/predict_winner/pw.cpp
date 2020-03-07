#include<iostream>
#include <vector>
#pragma warning (disable:4996)
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {

		int N, answer(0);
		cin >> N;

		int grid[49][49];
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				scanf("%1d", &grid[i][j]);

		for (int i = 0; i <= N / 2; i++)
			for (int j = N / 2 - i; j <= N / 2 + i; j++) {
				answer += grid[i][j];
				cout << i << "," << j << endl;
			}

		for (int i = 1; i <= N/2; i++)
			for (int j = i; j < N - i; j++) {
				answer += grid[N / 2 + i][j];
				cout << N/2+i << "," << j << endl;
			}
		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}