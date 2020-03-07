#include<iostream>
#include<vector>

using namespace std;


int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){
		vector<int> num;
		int N;

		for (int i = 0; i < 10; i++) {
			int n;
			cin >> n;
			if (n == 1) num.push_back(i);
		}

		cin >> N;
		




	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}