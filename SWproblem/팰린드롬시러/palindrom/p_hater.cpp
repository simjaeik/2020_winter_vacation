#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		string input, answer("NO");
		cin >> input;

		for (int i = 0; i < input.length() - 1 && answer != "YES"; i++) {
			char cmp = input[i];
			for (int j = i + 1; j < input.length(); j++) {
				if (cmp == input[j]) {
					string reversed = input.substr(i, j-i+1);
					string un_reversed = reversed;

					reverse(reversed.begin(), reversed.end());

					if (reversed == un_reversed) {
						answer = "YES";
						break;
					}
				}
			}
		}

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}