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

		string input;
		cin >> input;

		sort(input.begin(), input.end());
		input.erase(unique(input.begin(), input.end()), input.end());

		cout << "#" << test_case << " " << input.length() << endl;
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}