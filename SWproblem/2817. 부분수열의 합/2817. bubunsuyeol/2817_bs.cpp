#include<iostream>
#include<vector>

using namespace std;
vector<int> nums;
int N, K,ans(0);

void dfs(int sum, int n) {

	if (n >= nums.size()) {
		if (sum == K)
			ans++;	
		return;
	}

	dfs(sum, n+1);
	dfs(sum + nums[n], n+1);
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){
		cin >> N >> K;

		nums.assign(N, 0);

		for (int i = 0; i < N; i++)
			cin >> nums[i];

		dfs(nums[0],1);
		dfs(0,1);

		cout << "#" << test_case << " " << ans << endl;
		ans = 0;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}