#include<iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){
		int A, B, C, answer(0);
		cin >> A >> B >> C;

		int br = min(A, B);

		answer = C / br;

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}