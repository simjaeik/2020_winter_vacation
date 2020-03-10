#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		int N, answer(0);
		cin >> N;

		vector<int> dump(N);

		for (int i = 0; i < N; i++)
			cin >> dump[i];

		auto mmin = min_element(dump.begin(), dump.end());
		auto mmax = max_element(dump.begin(), dump.end());

		while (*mmin != *mmax) {
			*mmin += 1;
			*mmax -= 1;

			mmin = min_element(dump.begin(), dump.end());
			mmax = max_element(dump.begin(), dump.end());

			answer++;
		}

		printf("#%d %d\n", test_case, answer);

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}