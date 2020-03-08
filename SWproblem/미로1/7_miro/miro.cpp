#include<iostream>
#pragma warning(disable:4996)
using namespace std;

int miro[16][16];
int dir[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
int miro_end[1][2];
int answer = 0;

void dfs(int x, int y, bool check[16][16]) {

	if (x < 0 || y < 0 || x >= 16 || y >= 16 || miro[x][y] == 1 || check[x][y] == true)
		return;
	else if (miro[x][y] == 3) {
		answer=1;
		return;
	}
	else {
		check[x][y] = true;
		for (int i = 0; i < 4; i++){
			int nx = x + dir[i][0];
			int ny = y + dir[i][1];
			dfs(nx, ny, check);
		}
	}
}

int main(int argc, char** argv)
{
	int test_case;
	
	for (test_case = 1; test_case <= 10; ++test_case){
		int n;
		cin >> n;

		int miro_start[1][2];
		for (int i = 0; i < 16; i++)
			for (int j = 0; j < 16; j++) {
				scanf("%1d", &miro[i][j]);
				if (miro[i][j] == 3) {
					miro_end[0][0] = i;
					miro_end[0][1] = j;
				}
				else if (miro[i][j] == 2) {
					miro_start[0][0] = i;
					miro_start[0][1] = j;
				}
			}


		cout << miro_end[0][0] << ", "<<miro_end[0][1]<<"/" << miro_start[0][0] << ", " << miro_start[0][1] << endl;

		bool check[16][16] = { false };
		dfs(miro_start[0][0], miro_start[0][1], check);

		cout << "#" << test_case << " " << answer << "\n";

		answer = 0;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}