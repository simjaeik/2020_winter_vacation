#include<iostream>
#include<vector>
#include<algorithm>
#include <string>

using namespace std;

int answer = 0;
void check_palindrome(vector<vector<char>> grid, int x, int y, int len) {

	string tmp, cmp;

	for (int i = x+2; i < 8; i++) {
		tmp = "";
		cmp = ".";
		for (int j = x; j <= i; j++)
			tmp += grid[j][y];
		cmp = tmp;
		reverse(tmp.begin(), tmp.end());
		if (cmp.length() == len && cmp == tmp) answer++;
	}

	for (int i = y + 2; i < 8; i++) {
		tmp = "";
		cmp = ".";
		for (int j = y; j <= i; j++)
			tmp += grid[x][j];
		cmp = tmp;
		reverse(tmp.begin(), tmp.end());
		if (cmp.length() == len && cmp == tmp) answer++;
	}

	return;
}

int main(int argc, char** argv)
{
	int test_case;
	
	for (test_case = 1; test_case <= 10; ++test_case){
		int N;
		cin >> N;
		
		vector<vector<char>> grid(8, vector<char>(8));

		for (int i = 0; i < 8; i++){
			string tmp;
			cin >> tmp;
			for (int j = 0; j < 8; j++)
				grid[i][j] = tmp[j];
		}

		for (int i = 0; i < 8; i++){
			for (int j = 0; j < 8; j++) {
				check_palindrome(grid, i, j, N);
			}
		}
		
		cout << "#" << test_case << " " << answer << endl;
		answer = 0;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}