/////////////////////////////////////////////////////////////////////////////////////////////
// 기본 제공코드는 임의 수정해도 관계 없습니다. 단, 입출력 포맷 주의
// 아래 표준 입출력 예제 필요시 참고하세요.
// 표준 입력 예제
// int a;
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){

		int N, ans(0);
		cin >> N;

		for (int i = 1; i <= N; i++) {

			int sum = 0;
			int num = i;
			while (sum < N) {
				sum += num++;
				if (sum == N) ans++;
			}

		}
		
		cout << "#" << test_case << " " << ans << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}