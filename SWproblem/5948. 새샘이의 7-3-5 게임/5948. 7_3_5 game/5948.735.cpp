#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> num;
vector<int> nums;

void dfs(int count, int i, int sum) {

	if (count == 3) {
		num.push_back(sum);
		return;
	}
	if (i >= 7)
		return;

	dfs(count + 1, i + 1, sum + nums[i]);
	dfs(count, i + 1, sum);

}

int main(int argc, char** argv)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		nums.assign(7, 0);
		num.clear();
		for (int i = 0; i < 7; i++)
			cin >> nums[i];

		dfs(0, 0, 0);

		sort(num.rbegin(), num.rend());
		num.erase(unique(num.begin(), num.end()), num.end());

		cout << "#" << test_case << " " << num[4] << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
} 