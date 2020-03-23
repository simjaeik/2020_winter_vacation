#include <iostream>
#include <vector>

using namespace std;

int m_floor=-1, m_ceiling=-1;

void get_f_c(vector<int> nums, int begin, int ceil, int flor, int target) {

	if (begin >= nums.size()) {
		m_floor = flor;
		m_ceiling = ceil;
		return;
	}

	if (nums[begin] == target)
		get_f_c(nums, nums.size(), target, target, target);
	else if (nums[begin] > target)
		get_f_c(nums, nums.size(), ceil, nums[begin], target);
	else
		get_f_c(nums, begin + 1, nums[begin], flor, target);
}

int main() {

	int N, K;
	cin >> N;

	vector<int> nums(N);
	for (int i = 0; i < N; i++)
		cin >> nums[i];
	cin >> K;

	get_f_c(nums, 0, -1, -1, K);

	cout << m_floor << " " << m_ceiling << endl;
}