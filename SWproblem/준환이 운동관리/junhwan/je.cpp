#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){

		int L, U, X,answer(0);
		cin >> L >> U >> X;

		int range = L-X;
		
		if (range > 0)
			answer = range;
		else if (range < 0 && -range <= U - L)
			answer = 0;
		else
			answer = -1;

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}