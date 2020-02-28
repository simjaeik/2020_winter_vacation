#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M, answer = 0;
		cin >> N >> M;

		vector<int> bag(N);
		vector<int> new_bag(N);

		for (int i = 0; i < N; i++)
			cin >> bag[i];

		for (vector<int>::iterator itr = bag.begin(); itr < bag.end(); itr++)
			if (*itr >= M)
				new_bag.push_back(*itr);

		if (new_bag.size() < 2)
			cout << "#" << test_case << " " << -1 << endl;

		for (int i = 0; i < N - 1; i++) {
			for (int j = i + 1; j < N; j++) {
				int sum = bag[i] + bag[j];
				if (sum <= M && sum > answer)
					answer = sum;
			}
		}

		if (answer == 0) answer = -1;

		cout << "#" << test_case << " " << answer << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}