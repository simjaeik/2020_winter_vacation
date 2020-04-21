#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n = 4;
vector<vector<int>> grid = { {6,7,12,5},{5,3,11,18},{7,17,3,3},{8,10,14,9} };
vector<vector<int>> route(n, vector<int>(n, 0));
vector<vector<string>> rt(n, vector<string>(n, "-"));
int s_find(int x, int y) {
	
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j <= y; j++) {

			if (i == 0 && j == 0) 
				route[i][j] = grid[0][0];
			else if (i == 0) {
				route[i][j] = route[i][j - 1] + grid[i][j];
				rt[i][j] = "天";
			}
			else if (j == 0) {
				route[i][j] = route[i - 1][j] + grid[i][j];
				rt[i][j] = "太";
			}
			else {
				route[i][j] = min(route[i - 1][j], route[i][j - 1]) + grid[i][j];
				if (route[i - 1][j] > route[i][j - 1])
					rt[i][j] = "天";
				else
					rt[i][j] = "太";
			}
		}
	}

	return route[x][y];
}

int main() {
	
	route[0][0] = grid[0][0];

	cout << s_find(3, 3);
	
	int i=3, j=3;
	vector<string> ans;
	while (rt[i][j] != "-") {
		if (rt[i][j] == "天") {
			//cout << "天";
			ans.push_back("天");
			j--;
		}
		else {
			//cout << "太";
			ans.push_back("太");
			i--;
		}
	}
	for (auto a : ans)
		cout << a;
	
}