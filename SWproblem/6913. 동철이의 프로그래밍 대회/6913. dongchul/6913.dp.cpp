#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M;
		cin >> N >> M;

		vector<int> p(N);

		for (int i = 0; i < N; i++) {
			int sum=0;
			for (int j = 0; j < M; j++) {
				int n;
				cin >> n;
				sum += n;
			}
			p.push_back(sum);
		}


		sort(p.rbegin(), p.rend());
		int ans1=p[0], ans2=1;

		for (int i = 1; i < N; i++){
			if (p[i] == ans1)
				ans2++;
			else
				break;
		}

		cout << "#" << test_case << " " << ans2 << " " << ans1 << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}