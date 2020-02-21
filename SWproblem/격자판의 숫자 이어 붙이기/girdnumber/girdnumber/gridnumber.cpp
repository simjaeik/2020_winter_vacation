#include<iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;

set<string> numbers;
vector<vector<int>> offset = { {1,0}, {-1,0}, {-1,0},{0,1} };
int maze[4][4];

void get_numbers(  int x, int y, string num ) {

	if (num.length() == 7) {
		numbers.insert(num);
		return;
	}
	else {
		num += to_string(maze[x][y]);
		for (int i = 0; i < 4; i++) {
			int nx = x + offset[i][0];
			int ny = y + offset[i][1];
			if (nx < 0 || ny < 0 || nx > 3 || ny > 3)
				return;
			get_numbers( nx, ny, num);
		}
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		//vector<vector<int>> maze = { {1,1,1,1},{1,1,1,2},{1,1,2,1},{1,1,1,1} };

		numbers.clear();

		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				cin >> maze[i][j];

		for (int i = 0; i < 4; i++)
			for(int j = 0; j < 4; j++)
				get_numbers( i, j, "");

		cout << "#" <<test_case<<" "<< numbers.size()<<endl;

	}

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}