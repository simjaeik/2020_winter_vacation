#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){

		int n, m, answer;
		cin >> n >> m;
		
		int N=0, M=m;
		answer = 2 * m;
		while (n != answer) {
			N++;
			M--;
			answer = N + M * 2;
		}

		cout << "#" << test_case << " " << N << " " << M << endl;


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}