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
		int N,answer(0);
		string a, b;
		cin >> N>>a>>b;

		for (int i = 0; i < N; i++){
			if (a[i] == b[i])answer++;
		}
		
		cout << "#" << test_case << " " << answer << endl;
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}