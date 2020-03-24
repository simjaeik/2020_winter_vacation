#include <iostream>
#include <vector>

using namespace std;

int N, K, ans(0);
int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };
vector<vector<int>> grid, chk;

void dfs(int x, int y, int len) {

	if (x < 0 || y < 0 || x >= N || y >= N || chk[x][y] == 1 || grid[x][y]!=0 || len > K)
		return;

	if (x == N - 1 && y == N - 1) {
		ans++;
		return;
	}

	chk[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];

		if (nx >= 0 && ny >= 0 && nx < N && ny < N && grid[nx][ny]==0 && chk[nx][ny] == 0)
			dfs(nx, ny, len+1);
	}
	chk[x][y] = 0;
}

int main() {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;

		grid.assign(N, vector<int>(N));
		chk.assign(N, vector<int>(N));
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> grid[i][j];
		cin >> K;

		dfs(0, 0, 0);


		cout << "#"<< i<<" "<<ans << endl;
		ans = 0;
	}

}