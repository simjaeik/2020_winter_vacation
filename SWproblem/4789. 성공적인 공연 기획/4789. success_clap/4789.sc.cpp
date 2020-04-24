#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string input;
		int ans(0),clap(0);
		cin >> input;

		if (input[0] == 0) {
			ans++;
			clap++;
		}
		else 
			clap += input[0] - '0';
		
		for (int i = 1; i < input.length();i++) {
			if (input[i] - '0' == 0)
				continue;
			else {
				if (i > clap) {
					ans += (i - clap);
					clap += i - clap;
				}
				clap += input[i] - '0';
			}
		}

		cout << "#" << test_case << " " << ans << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}