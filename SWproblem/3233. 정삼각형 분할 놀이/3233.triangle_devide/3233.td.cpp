#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		long long A, B;
		cin >> A >> B;

		long long x = A / B;
		long long ans = x * x;

		cout << "#" << test_case << " " << ans << endl;


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}