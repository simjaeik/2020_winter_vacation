#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){
		int N;
		cin >> N;

		vector<int> bos(5001);

		for (int i = 0; i < N; i++){
			int A, B;
			cin >> A >> B;

			for (int j = A; j <= B; j++)
				bos[j]++;
		}

		int P;
		cin >> P;

		cout << "#" << test_case << " ";
		for (int i = 0; i < P; i++){
			int C;
			cin >> C;

			cout << bos[C]<<" ";
		}
		cout << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}