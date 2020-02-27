#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		long long n, N, K;
		cin >> n;

		N = 2 * ((n - 1) * (n - 1) + 1) - 1;
		K = 2 * n * n - 1;

		cout << "#" << test_case << " " << N << " " << K << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}