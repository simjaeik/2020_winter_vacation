
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	
	int T;
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){
		int N;
		long double answer=0;
		cin >> N;

		for (int i = 0; i < N; i++){
			long double x, y;
			cin >> x >> y;
			answer += x * y;
		}

		printf("#%d %.6lf\n", test_case, answer);
		//cout << "#" << test_case << " " << answer << endl;
		
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}