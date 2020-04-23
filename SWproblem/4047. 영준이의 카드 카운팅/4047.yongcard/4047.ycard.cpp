#include<iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		map<char, set<int>> card;

		string input, ans("");
		cin >> input;
		/*
				if (input.length() > 3 * 52) {
					cout << "#" << test_case << "ERROR" << endl;
					continue;
				}*/

		for (int i = 0; i < input.length(); i += 3) {
			char ch = input[i];
			int num = ((input[i + 1] - '0') * 10) + (input[i + 2] - '0');

			if (card[ch].find(num) != card[ch].end()) {
				ans = "ERROR";
				break;
			}
			card[ch].insert(num);
		}

		if (ans == "ERROR")
			cout << "#" << test_case << " ERROR" << endl;
		else
			cout << "#" << test_case << " " << 13 - card['S'].size() << " " << 13 - card['D'].size() << " " <<
			13 - card['H'].size() << " " << 13 - card['C'].size() << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}