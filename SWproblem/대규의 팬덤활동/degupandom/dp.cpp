#include<iostream>
#include<set>
#include <string>
using namespace std;

long long N, answer = 0;

int dfs(int num, int cnt, set<int> check, string tmp) {

	if (num > 9 || num < 0)
		return 0;

	if (cnt >= N) {
		if (check.size() >= 10) {
			answer = (answer + 1) % 100000000;
			cout << tmp << endl;
		}
		return;
	}


	return (dfs(num + 1, cnt + 1, check, tmp) + dfs(num - 1, cnt + 1, check, tmp)) % 100000000;

}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {

		cin >> N;

		for (int i = 1; i < 10; i++) {
			set<int> chk;
			string tmp = "";
			dfs(i, 0, chk, tmp);
		}

		cout << "#" << test_case << " " << answer << endl;

		answer = 0;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}