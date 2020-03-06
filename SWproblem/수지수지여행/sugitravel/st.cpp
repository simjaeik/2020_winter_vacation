#include<iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int answer = 0, R, C;
int dir[4][2] = { {1,0},{0,1},{-1,0}, {0,-1} };
//vector<vector<char>> grid;
//vector<vector<bool>> pass;

char grid[20][20];
bool pass[20][20];

void get_max(set<char> check, int x, int y ) {
	
	if (check.find(grid[x][y]) != check.end() || pass[x][y] == true) {
		if (check.size() > answer)
			answer = check.size();
		return;
	}
	else {
		check.insert(grid[x][y]);
		pass[x][y] = true;
		for (int i = 0; i < 4; i++) {
			int nx = x + dir[i][0];
			int ny = y + dir[i][1];
			if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
				get_max( check, nx, ny);
			pass[x][y] = false;
		}
	}
}

int main(int argc, char** argv)
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){
		cin >> R >> C;
	
		//grid.assign(R, vector<char>(C, 0));
		
		for (int i = 0; i < R; i++){
			string tmp;
			cin >> tmp;
			for (int j = 0; j < C; j++)
				grid[i][j] = tmp[j];
		}

		set<char> check;
		//pass.assign(R, vector<bool>(C, false));
		get_max(check, 0, 0 );

		cout << "#" << test_case << " " << answer << endl;
		//grid.clear();
		//check.clear();
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
