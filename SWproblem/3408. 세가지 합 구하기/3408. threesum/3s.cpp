#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){

		long long N;
		cin >> N;

		long long s1, s2, s3;

		s1 = N * (N + 1) / 2;
		s2 = N * N;
		s3 = N * (N + 1);

		cout << "#" << test_case << " " << s1 << " " << s2 << " " << s3 << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}