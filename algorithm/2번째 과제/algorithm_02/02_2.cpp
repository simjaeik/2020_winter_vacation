//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int m_floor=-1, m_ceiling=-1;
//
//void get_f_c(vector<int> nums, int begin, int ceil, int flor, int target) {
//
//	if (begin >= nums.size()) {
//		m_floor = flor;
//		m_ceiling = ceil;
//		return;
//	}
//
//	if (nums[begin] == target)
//		get_f_c(nums, nums.size(), target, target, target);
//	else if (nums[begin] > target)
//		get_f_c(nums, nums.size(), ceil, nums[begin], target);
//	else
//		get_f_c(nums, begin + 1, nums[begin], flor, target);
//}
//
//int main() {
//
//	int N, K;
//	cin >> N;
//
//	vector<int> nums(N);
//	for (int i = 0; i < N; i++)
//		cin >> nums[i];
//	cin >> K;
//
//	get_f_c(nums, 0, -1, -1, K);
//
//	cout << m_floor << " " << m_ceiling << endl;
//}

#include <iostream>
#include<vector>
#include <set>

using namespace std;

int ans(0), N, K;
vector<int> nums;
set<vector<int>> st;

void get_3sum(int a, int b, int c) {
	cout << a << " " << b << " " << c << endl;


	if ( a>=b || b>=c || a>=c || c>=nums.size())
		return;
	if (nums[a] + nums[b] + nums[c] == K) {
		ans++;
		vector<int> tmp = { a,b,c };
		st.insert(tmp);
		return;
	}
	get_3sum(a, b, c+1);
	get_3sum(a, b+1, c);
	get_3sum(a+1, b, c);
}

int main() {

	cin >> N;

	nums.assign(N, 0);

	for (int i = 0; i < N; i++)
		cin>>nums[i];

	cin >> K;

	get_3sum(0, 1, 2);

	cout << st.size() << endl;
}