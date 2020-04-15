#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;

	vector<vector<int>> bd;
	vector<int> tmp;

	for (int i = 0; i < 5; i++)
		bd.push_back(tmp);

	stack<int> stk;

	for (auto a : board)
		for (int i = 0; i < 5; i++)
			if (a[i] != 0)
				bd[i].push_back(a[i]);

	for (int i = 0; i < moves.size(); i++) {
		int n = moves[i] - 1;

		if (!bd[n].empty()) {
			int num = bd[n].back();
			bd[n].erase(bd[n].end());

			if (!stk.empty() && stk.top() == num) {
				stk.pop();
				answer += 2;
			}
			else
				stk.push(num);
		}
	}

	return answer;
}

int main() {
	vector<vector<int>> tm = { {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} };
	vector<int> t ={1, 5, 3, 5, 1, 2, 1, 4};

	cout << solution(tm, t);

}