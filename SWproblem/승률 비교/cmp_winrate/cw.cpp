#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){
		long double A, B, C, D;
		scanf("%d %d %d %d", &A, &B, &C, &D);

		long double alice, bob;
		alice = A / B; bob = C / D;

		string answer;
		if (alice > bob)
			answer = "ALICE";
		else if (bob > alice)
			answer = "BOB";
		else
			answer = "DRAW";

		cout << "#" << test_case << " " << answer << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}