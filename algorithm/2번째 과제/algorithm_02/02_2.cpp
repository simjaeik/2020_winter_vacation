#include <iostream>
#include <vector>

using namespace std;

int m_floor=-1, m_ceiling=-1;

void get_f_c(vector<int> nums, int begin, int target) {

	if (begin >= nums.size()) 
		return;
	else if (nums[begin] > target) {
		m_floor = nums[begin];
		if (begin - 1 >= 0)
			m_ceiling = nums[begin - 1];
		return;
	}
	else if (nums[begin] == target) {
		m_floor = nums[begin];
		m_ceiling = nums[begin];
		return;
	}

	get_f_c(nums, begin + 1, target);
}

int main() {

	int N, K;
	cin >> N;

	vector<int> nums(N);
	for (int i = 0; i < N; i++)
		cin >> nums[i];
	cin >> K;

	get_f_c(nums, 0, K);

	cout << m_floor << " " << m_ceiling << endl;
}