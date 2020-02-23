#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int T;
	cin >> T;

	for (int Tc = 1; Tc <= T; Tc++)
	{
		int N, M;
		cin >> N >> M;
		int max = 0;

		vector<vector<int>> grid;

		for (int i = 0; i < N; i++)
		{
			vector<int> tmp;
			for (int j = 0; j < N; j++)
			{
				int n;
				cin >> n;
				tmp.push_back(n);
			}
			grid.push_back(tmp);
		}

		for (int i = 0; i <= N-M; i++){
			for (int j = 0; j <= N-M; j++){
				int sum = 0;
				for (int x = i; x < i+M; x++){
					for (int y = j; y < j+M; y++){
						sum += grid[x][y];
					}
				}
				if (sum > max) max = sum;
			}
		}


		cout << "#" << Tc << " " << max << endl;

	}



}