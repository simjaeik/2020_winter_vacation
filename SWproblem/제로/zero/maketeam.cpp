#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, K;
		cin >> N >> K;

		vector<int> team(K);
		bool check = true;

		for (int i = 1; i <= N * K;) {

			int cnt = N;
			
			if (N * K - i < N)
				cnt = N * K - i;
			
			if (check) {
				for (int t = 0; t < K; t++) {
					team[t] += i;
					i++;
				}
				check = false;
			}
			else {
				for (int t = K - 1; t >= 0; t--) {
					team[t] += i;
					i++;
				}
				check = true; 
			}

		}

		cout << "#" << test_case << " ";
		for (auto a : team)
			cout << a << " ";
		cout << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}