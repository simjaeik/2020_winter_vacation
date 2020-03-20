#include<iostream>
#include <vector>

using namespace std;

vector<vector<int>> grid;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){

		int N, M;
		cin >> N >> M;

		grid.assign(N, vector<int>(N));

		for (int i = 0; i < M; i++){
			int x, y, stone;
			cin >> x >> y>>stone;

			grid[x][y] = stone;

		}



	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}