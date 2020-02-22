#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int tc;
	int T;

	cin >> T;

	for (tc = 1; tc <= T; ++tc)
	{
		int N, T, P;
		int answer = 0;
		cin >> N >> T >> P;
		
		vector<vector<int>> players;
		vector<int> score_p(N);
		vector<int> score(T);
		vector<int> how_many(T);
		//vector<int> col(T);

		for (int i = 0; i < N; i++){
			vector<int> tmp;
			for (int j = 0; j < T; j++) {
				int is_or_not;
				cin >> is_or_not;
				tmp.push_back(is_or_not);
				if (is_or_not == 0) score[j]++;
				// 몇개 맞췄는지 작성중 ( how_many )
				// 20200222 still can't solve this problem
			}
			players.push_back(tmp);
		}
		
		for (int i = 0; i < N; i++){
			for (int j = 0; j < T; j++){
				if (players[i][j] == 1)
					score_p[i] += score[j];
			}
		}

		for (int i = 0; i < score_p.size(); i++)
		{
			if (i == P - 1)continue;
			if (score[i] > score[P - 1]) answer++;
			if(  )
		}



	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
