#include <vector>
#include <algorithm>
#include<iostream>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){

		int N, K;
		cin >> N >> K;

		vector<int> grade(N);

		for (int i = 0; i < N; i++)
			cin >> grade[i];

		sort(grade.begin(), grade.end(), cmp);

		int sum = 0;

		for (int i = 0; i < K; i++)
			sum += grade[i];

		cout << "#" << test_case << " " << sum << endl;



	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}