#include<iostream>
#include<vector>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int tc;
	int Tk;

	cin >> Tk;

	for (tc = 1; tc <= Tk; ++tc)
	{
		int N, T, P;
		cin >> N >> T >> P;

		int answer = 0;

		vector<vector<int>> players;
		vector<int> score_p(N);
		vector<int> score(T);
		vector<int> how_many(N);
		//vector<int> col(T);

		for (int i = 0; i < N; i++){
			vector<int> tmp;
			for (int j = 0; j < T; j++) {
				getchar();
				int is_or_not = getchar()-'0'; 
				tmp.push_back(is_or_not);
				if (is_or_not == 0) score[j]++;
				else if (is_or_not == 1) how_many[i]++;
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
			if (score_p[i] > score_p[P - 1]) answer++;
			else if (score_p[i] == score_p[P - 1] && how_many[i] > how_many[P - 1]) answer++;
			else if (score_p[i] == score_p[P - 1] && how_many[i] == how_many[P - 1] && i < P - 1) answer++;
		}
		
		//cout << "#" << tc << " " << score_p[P - 1] << " " << answer + 1<<endl;
		printf("#%d %d %d\n", tc, score_p[P - 1], answer + 1);

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}