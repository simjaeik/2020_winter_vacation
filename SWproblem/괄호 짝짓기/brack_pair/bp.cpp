#include<iostream>
#include <string>
#include <stack>

using namespace std;

char set[3][2] = { {'{','}'}, {'[',']'}, {'(',')'} };

int main(int argc, char** argv)
{
	int test_case;

	for (test_case = 1; test_case <= 10; ++test_case) {
		int N, answer(-1);
		cin >> N;
		string input;
		stack<char> brk;

		cin >> input;

		for (int i = 0; i < N && answer != 0; i++) {
			char tmp = input[i];

			for (int j = 0; j < 3; j++) {
				if (tmp == set[j][1]) {
					if (brk.top() == set[j][0])
						brk.pop();
					else {
						answer = 0;
						break;
					}
				}
			}
			if (tmp == set[0][0] || tmp == set[1][0] || tmp == set[2][0])
				brk.push(tmp);
		}
		if (answer != 0)
			answer = 1;

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}