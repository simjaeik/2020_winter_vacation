#include <iostream>
#include <vector>

using namespace std;
int m_x, m_y;

int recursion(vector<vector<int>>& picture, int x, int y , int color) {
	if (x < 0 || y < 0 || x >= m_x || y >= m_y || picture[x][y] != color)
		return 0;
	else {
		picture[x][y] = -1;
		return recursion(picture, x+1, y, color) + recursion(picture, x, y+1, color) +
			recursion(picture, x-1, y, color) + recursion(picture, x, y-1, color) + 1;
	}
}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
	int number_of_area = 0;
	int max_size_of_one_area = 0;
	m_x = m, m_y = n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (picture[i][j] != -1 && picture[i][j] != 0)
			{
				number_of_area++;
				int tmp = recursion(picture, i, j, picture[i][j]);
				if (max_size_of_one_area < tmp) 
					max_size_of_one_area = tmp;
			}

	vector<int> answer(2);
	answer[0] = number_of_area;
	answer[1] = max_size_of_one_area;
	return answer;
}

int main() {

	vector<vector<int>> tmp = { {1,1,1,0},{1,2,2,0},{1,0,0,1},{0,0,0,1},{0,0,0,3},{0,0,0,3} };

	vector<int> tmp2 = solution(6, 4, tmp);

	for (auto a : tmp2)
		cout << a<<" ";
}