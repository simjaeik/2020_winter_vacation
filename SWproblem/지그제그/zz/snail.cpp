#include <iostream>
#include <vector>

using namespace std;
int offset[4][2] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
vector<vector<int>> grid;

int main() {

	int T;
	cin >> T;

	for (int Tc = 1; Tc <= T; Tc++)
	{
		int answer = 0, n;
		cin >> n;
		grid.clear();

		vector<int> tmp(n, 0);
		for (int i = 0; i < n; i++)
			grid.push_back(tmp);


		int x = 0, y = 0, position = 0, num = 1;

		while (num<=n*n) {

			if (x < 0 || y < 0 || x >= n || y >= n || grid[x][y] != 0) {
				x -= offset[position][0];
				y -= offset[position][1];
				position = (position + 1) % 4;
				x += offset[position][0];
				y += offset[position][1];
				//if (grid[x][y] != 0) break;
			}
			else {
				grid[x][y] = num;
				x += offset[position][0];
				y += offset[position][1];
				num++;
			}

		}

		cout << "#" << Tc << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << grid[i][j] << " ";
			cout << endl;
		}

	}
}