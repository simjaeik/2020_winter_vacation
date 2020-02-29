//#include<iostream>
//#include <queue>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int dir[4][2] = { {1,0}, {0,1},{-1,0},{0,-1} };
//int answer = 0, N;
//
//void get_route(vector<vector<int>> grid, vector<vector<bool>> check, int x, int y, int sum) {
//	//cout << x << " " << y << " : " << sum << endl;
//
//	if (answer != 0 && sum >= answer)
//		return;
//	else if (x < 0 || y < 0 || x >= N || y >= N || check[x][y] == true)
//		return;
//	else if (x == N - 1 && y == N - 1) {
//		cout << sum << "--" << endl;
//		answer = sum;
//		return;
//	}
//	else {
//
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			check[x][y] = true;
//			get_route(grid, check, nx, ny, sum + grid[x][y]);
//		}
//	}
//
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//
//	cin >> T;
//
//	for (test_case = 1; test_case <= T; ++test_case) {
//		cin >> N;
//
//		vector<vector<int>> grid;
//		vector<vector<bool>> check(N, vector<bool>(N, false));
//		for (int i = 0; i < N; i++) {
//			string tmp;
//			cin >> tmp;
//			vector<int> a;
//			for (int j = 0; j < tmp.length(); j++) {
//				a.push_back(tmp[j] - '0');
//			}
//			grid.push_back(a);
//		}
//
//		get_route(grid, check, 0, 0, 0);
//
//		grid.clear();
//		check.clear();
//
//		cout << "#" << test_case << " " << answer << endl;
//	}
//
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}

#include<iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int dir[4][2] = { {1,0}, {0,1},{-1,0},{0,-1} };
int answer = 0, N;

int map[101][101];
int d[101][101];

int solve() {
	queue<pair<int, int>> q;

	d[0][0] = 0;
	q.push({ 0,0 });

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dir[i][0];
			int ny = y + dir[i][1];

			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if( d[nx][ny] > d[x][y] + map[nx][ny] )


		}

	}


}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		cin >> N;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				scanf("%1d", &map[i][j]);
				d[i][j] = 90000;
			}
		}


		answer = solve();




		cout << "#" << test_case << " " << answer << endl;
	}

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}