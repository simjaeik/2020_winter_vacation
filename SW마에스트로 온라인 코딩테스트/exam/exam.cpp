//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int cost[10] = { 6,2,5,5,4,5,6,3,7,6 };
//int main() {
//
//	int n;
//	cin >> n;
//	long long num;
//	string ans = "";
//
//	int len = n / 2;
//	
//	for (int i = 0; i < len; i++)
//		ans += '1';
//
//	if (n % 2 == 1)
//		ans[0] = '7';
//
//	cout << ans;
//
//}

#include <string>
#include <iostream>
#include <vector>
using namespace std;
int N, M;

vector<vector<bool>> chk;
bool check(vector<vector<int>> grid, int x, int y) {
	if (chk[x][y] == true)
		return true;

	if (x - 1 >= 0 && y - 1 >= 0) {
		if (grid[x][y] + grid[x - 1][y] + grid[x][y - 1] + grid[x - 1][y - 1] == 4) {
			chk[x][y] = true; chk[x - 1][y] = true; chk[x][y - 1] = true; chk[x - 1][y - 1] = true;
			return true;
		}
	}
	if (x + 1 < M && y + 1 < N) {
		if (grid[x][y] + grid[x + 1][y] + grid[x][y + 1] + grid[x + 1][y + 1] == 4) {
			chk[x][y] = true; chk[x + 1][y] = true; chk[x][y + 1] = true; chk[x + 1][y + 1] = true;
			return true;
		}
	}
	if (x + 1 < M && y - 1 >= 0) {
		if (grid[x][y] + grid[x + 1][y] + grid[x][y - 1] + grid[x + 1][y - 1] == 4) {
			chk[x][y] = true; chk[x + 1][y] = true; chk[x][y - 1] = true; chk[x + 1][y - 1] = true;
			return true;
		}
	}
	if (x - 1 >= 0 && y + 1 < N) {
		if (grid[x][y] + grid[x - 1][y + 1] + grid[x - 1][y] + grid[x][y + 1] == 4) {
			chk[x][y] = true; chk[x - 1][y + 1] = true; chk[x - 1][y] = true; chk[x][y + 1] = true;
			return true;
		}
	}
	return false;
}

int main() {
	
	int tc;
	cin >> tc;

	for (int i = 0; i < tc; i++){

		string answer = "YES";
		cin >> N >> M;

		vector<vector<int>> ans;
		vector<vector<int>> grid;
		

		for (int i = 0; i < N; i++){
			vector<int> tmp(M);
			vector<bool> tp(M);
			for (int j = 0; j < M; j++) {
				cin >> tmp[j];
				tp.push_back(false);
			}
			ans.push_back(tmp);
			chk.push_back(tp);
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++) {
				if(ans[i][j]==1 && !check( ans, i, j)){
					answer = "NO";
					break;
				}
			}
			if (answer == "NO")
				break;
		}

		cout << answer << endl;
		chk.clear();
	}
}
