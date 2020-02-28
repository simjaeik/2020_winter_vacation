#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long double my_pow(int len) {
	int answer = 1;
	while (len--) {
		answer *= 2;
	}
	return answer;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string str;
		cin >> str;
		vector<string> n_w;
		
		for (int i = 0; i < str.length(); ){
			if (str[i] == 'n') {
				i += 5;
				n_w.push_back("n");
			}
			else {
				i += 4;
				n_w.push_back("w");
			}
		}

		reverse(n_w.begin(), n_w.end());

		long double answer = 0;
		int len = 1;

		if (n_w[0] == "n")
			answer = 0;
		else
			answer = 90;
		n_w.erase(n_w.begin());

		for (auto a : n_w) {
			if (a == "n")
				answer -= (90 / my_pow(len));
			else
				answer += (90 / my_pow(len));
			len++;
		}

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}