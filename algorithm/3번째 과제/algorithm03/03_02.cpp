#include <iostream>
#include <vector>
#include <string>

using namespace std;

int T, N;
int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };
string ans = "NO";
vector<vector<int>> grid, chk;

void dfs(int x, int y) {

	if (x < 0 || y < 0 || x >= N || y >= N || chk[x][y] == 1 || grid[x][y] == 1)
		return;

	if (x == N - 1 && y == N - 1) {
		ans = "YES";
		return;
	}

	chk[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		while (nx >= 0 && ny >= 0 && nx < N && ny < N && grid[nx][ny] == 0) {
			nx += dir[i][0];
			ny += dir[i][1];
		}
		nx -= dir[i][0];
		ny -= dir[i][1];
		
		if(!(x==nx && y==ny))
			dfs(nx, ny);
	}
	chk[x][y] = 0;
}

int main() {

	cin >> T;
	for (int i = 1; i <= T; i++) {

		cin >> N;
		grid.assign(N, vector<int>(N));
		chk.assign(N, vector<int>(N));

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> grid[i][j];

		dfs(0, 0);

		cout << "#" << i << " " << ans << endl;
		ans = "NO";
	}
}
//