#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){

		int D, H, M;
		cin >> D >> H >> M;

		int m_time, k_time, answer;

		k_time = D * 24 * 60 + H * 60 + M;
		m_time = 11 * 24 * 60 + 11 * 60 + 11;
		answer = k_time - m_time;

		if (answer < 0) answer = -1;

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
