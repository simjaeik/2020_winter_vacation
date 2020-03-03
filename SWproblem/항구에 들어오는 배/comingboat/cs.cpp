#include<iostream>
#pragma warning (disable:4996)
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false);
	int test_case;
	int T;

	//scanf("%d",&T);
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		long long N, answer(0);
		//scanf("%lli",&N);
		cin >> N;
		vector<long long> vec(N);
		set<long long> st;

		for (int i = 0; i < N; i++) {
			long long tmp;
			cin >> tmp;
			st.insert(tmp);
			//scanf("%lli", &vec[i]);
		}
		vector<long long> check(vec);
		set<long long> chk = st;

		st.erase(1);
		//vec.erase(vec.begin());
		while (!st.empty()) {
			long long gab = *st.begin() - 1;
			long long num = *st.begin();
			auto itr = chk.find(num);
			while (itr != chk.end()) {
				if(st.find(num)!=st.end())
					st.erase(num);
				num += gab;
				itr = chk.find(num);
			}
			answer++;
		}

		//cout << "#" << test_case << " " << answer << "\n";
		printf("#%d %lli\n", test_case, answer);

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}