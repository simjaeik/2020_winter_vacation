#include<iostream>
#include<vector>

using namespace std;
vector<vector<int>> grid;
vector<vector<bool>> chk;
int dir[8][2] = { {-1,0},{-1,1}, {0,1}, {1,1}, {1,0}, {1,-1}, {0,-1},{-1,-1} };
int N;

void solve(int x, int y) {

	if (x < 0 || y < 0 || x >= N || y >= N || chk[x][y] )
		return;
	if (grid[x][y] > 0) {
		chk[x][y] = true;
		return;
	}

	chk[x][y] = true;
	for (int i = 0; i < 8; i++){
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || ny < 0 || nx >= N || ny >= N || chk[nx][ny] )
			continue;
		solve(nx, ny);
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		int ans(0);

		chk.clear();
		grid.clear();

		vector<vector<char>> input;
		for (int i = 0; i < N; i++){
			vector<char> tmp(N);
			for (int j = 0; j < N; j++)
				cin >> tmp[j];
			input.push_back(tmp);
			grid.push_back(vector<int>(N, 0));
			chk.push_back(vector<bool>(N, false));
		}
		

		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				int cnt(0);
				if (input[i][j] == '*') {
					grid[i][j] = -1;
					chk[i][j] = true;
					continue;
				}
				for (int l = 0; l < 8; l++) {
					int nx = i + dir[l][0];
					int ny = j + dir[l][1];
					if (nx < 0 || ny < 0 || nx >= N || ny >= N || input[nx][ny] != '*')
						continue;
					cnt++;
				}
				grid[i][j] = cnt;
			}
		}

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (grid[i][j] == 0 && chk[i][j] == false) {
					solve(i, j);
					ans++;
				}


		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++) {
				if (chk[i][j] == false) {
					solve(i, j);
					ans++;
				}
			}
		cout << "#" << test_case << " " << ans << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}