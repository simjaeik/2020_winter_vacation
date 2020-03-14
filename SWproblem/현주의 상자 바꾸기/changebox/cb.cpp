#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){

		int N, Q;
		cin >> N >> Q;

		vector<int> box(N);

		for (int i = 1; i <= Q; i++){
			int L, R;
			cin >> L >> R;

			for (int j = L - 1; j < R; j++)
				box[j] = i;
		}

		cout << "#" << test_case << " ";
		for (auto a : box)
			cout << a << " ";
		cout << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}