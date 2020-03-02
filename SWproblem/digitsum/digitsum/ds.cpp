#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){
		long long N;
		cin >> N;

		while (N >= 10) {
			long long num = N;
			long long tmp=0;
			while (num != 0) {
				tmp += num % 10;
				num /= 10;
			}
			N = tmp;
		}

		cout << "#" << test_case << " " << N << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}