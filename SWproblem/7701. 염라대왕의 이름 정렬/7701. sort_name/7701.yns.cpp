#include<iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ios>

using namespace std;

bool cmp(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main(int argc, char** argv)
{
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(0);
    
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		cin >> N;

		string* menu = new string[N + 1];

		for (int i = 0; i < N; i++)
			cin >> menu[i];

		sort(menu, menu + N, cmp);

		cout << '#'<< test_case << "\n";

		for (int i = 0; i < N; i++) {
			if (menu[i] == menu[i+1])
				continue;
			cout << menu[i] << "\n";
		}
		delete[] menu;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}