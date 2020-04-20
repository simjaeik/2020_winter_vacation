#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		int N, ans(1);
		cin >> N;
		vector<bool> nums(N + 1, false);
		nums[0] = true;

		for (int i = 0; i < N; i++) {
			int n;
			cin >> n;
			nums[n] = true;

			if (nums[n - 1] == false)
				ans++;
		}

		cout << "#" << test_case << " " << ans << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}