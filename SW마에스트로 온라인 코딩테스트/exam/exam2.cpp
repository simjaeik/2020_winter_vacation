//
//#include <iostream>
//#include <vector>
//int N, K, answer(0);
//
//using namespace std;
//vector<int> nums;
//
//void dfs(vector<int> num, int sum) {
//
//	if (sum >= N) {
//
//		int ln = 0, tmp = 0;
//		for (auto a : num) {
//			tmp += nums[ln + a - 1] - nums[ln];
//			ln += a;
//		}
//		if (answer ==0 ||  tmp < answer)
//			answer = tmp;
//		return;
//	}
//
//	for (int i = 0; i < K; i++) {
//		num[i] ++;
//		dfs(num, sum + 1);
//		num[i]--;
//	}
//}
//
//using namespace std;
//int main() {
//
//	cin >> N >> K;
//
//	nums.assign(N, 0);
//	for (int i = 0; i < N; i++)
//		cin >> nums[i];
//
//	vector<int> n(K, 1);
//
//	dfs(n, K * 1);
//
//	cout << answer;
//	return 0;
//}