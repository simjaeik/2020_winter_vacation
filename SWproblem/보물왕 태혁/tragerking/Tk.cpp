#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){
		int N;
		cin >> N;

		vector<int> nums(N);
		for (int i = 0; i < N; i++)
			cin >> nums[i];
		sort(nums.begin(), nums.end());

		int answer = nums[0] * nums[N - 1];

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}