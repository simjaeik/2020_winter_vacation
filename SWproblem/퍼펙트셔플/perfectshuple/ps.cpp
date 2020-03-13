#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){

		int N;
		cin >> N;

		vector<string> answer(N);
		vector<string> card(N);
		for (int i = 0; i < N; i++)
			cin >> card[i];

		int j = N % 2 == 0 ? N / 2 : N / 2 + 1;
		int n = 0;
		for (int i = 0; i < N/2; i++, j++){
			answer[n++] = card[i];
			answer[n++] = card[j];
		}
		if (N % 2 == 1)
			answer[N - 1] = card[N / 2];

		cout << "#" << test_case << " ";
		for (auto a : answer)
			cout << a << " ";
		cout << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}