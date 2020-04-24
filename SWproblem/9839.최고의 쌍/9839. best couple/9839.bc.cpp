#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, ans(-1);
		cin >> N;
		vector<int> nums(N);

		for (int i = 0; i < N; i++)
			cin >> nums[i];

		sort(nums.rbegin(), nums.rend());

		for (int i = 0; i < N-1; i++){
			for (int j = i+1; j < N; j++){
				int n = nums[i] * nums[j];

				if (n < ans)
					break;
				if (n < 10)
					ans = n;

				int cmp = n;
				int prev = cmp % 10;
				cmp /= 10;
				while (cmp > 0) {
					int nw = cmp % 10;
					if (prev != nw + 1) 
						break;
					cmp /= 10;
					prev = nw;
					if (cmp <= 0)
						ans = n;
				}
			}
		}
		

		cout << "#" << test_case << " " << ans << endl;
	}

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}