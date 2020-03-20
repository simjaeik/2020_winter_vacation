#include <iostream>
#include <vector>

using namespace std;

vector<int> nums;
int K,ans(0);
int recursion(int start, int last) {

	int sum = nums[start] + nums[last];

	if (start >= last) 
		return 0;
	
	if (sum > K) {
		return recursion(start, last - 1);
	}
	else if (sum < K) {
		return recursion(start + 1, last);
	}
	else {
		cout << nums[start] << " " << nums[last] << endl;
		return 1 + recursion(start + 1, last - 1);
	}
}

int main() {

	int N;
	cin >> N;

	nums.assign(N,0);
	for (int i = 0; i < N; i++)
		cin >> nums[i];

	cin >> K;

	cout<<recursion(0, N-1);

}