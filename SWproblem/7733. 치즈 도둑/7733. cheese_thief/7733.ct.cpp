#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;

vector<vector<int>> grid;
vector<vector<bool>> chk;
vector<vector<bool>> chk2;
int N, ccz(0);
int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };

void dfs(int x, int y) {

	if (x < 0 || y < 0 || x >= N || y >= N || chk2[x][y] == true || chk[x][y] == true)
		return;

	chk2[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || ny < 0 || nx >= N || ny >= N || chk2[nx][ny] == true || chk[nx][ny] == true)
			continue;
		dfs(nx, ny);
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){
		cin >> N;

		vector<int> cz;
		grid.clear();
		chk.clear();
		chk2.clear();

		int mx = 0;
		for (int i = 0; i < N; i++){
			vector<int> tmp(N);
			vector<bool> btp(N,false);
			for (int j = 0; j < N; j++) {
				cin >> tmp[j];
				if (tmp[j] > mx)
					mx = tmp[j];
			}

			grid.push_back(tmp);
			chk.push_back(btp);
		}

		for (int i = 0; i < mx; i++) {

			for (int x = 0; x < N; x++)
				for (int y = 0; y < N; y++) 
					if(grid[x][y]==i)
						chk[x][y] = true;
			
			chk2 = chk;
			int cnt = 0;
			for (int x = 0; x < N; x++)
				for (int y = 0; y < N; y++) {
					if (chk[x][y] == false && chk2[x][y] == false) {
						dfs(x, y);
						cnt++;
					}
				}

			cz.push_back(cnt);
		}

		sort(cz.rbegin(), cz.rend());

		cout << "#" << test_case << " " << cz[0] << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}