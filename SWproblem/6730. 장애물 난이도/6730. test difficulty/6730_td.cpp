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
		vector<int> dif;

		for (int i = 0; i < N; i++)
			cin>>nums[i];

		for (int i = 0; i < N-1; i++)
			dif.push_back(nums[i + 1] - nums[i]);
		
		sort(dif.begin(), dif.end());

		int dif_min = dif.front();
		int dif_max = dif.back();

		if (dif_min > 0)
			dif_min = 0;
		else
			dif_min *= -1;

		if (dif_max < 0)
			dif_max = 0;

		cout << "#" << test_case << " " << dif_max << " " << dif_min << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}