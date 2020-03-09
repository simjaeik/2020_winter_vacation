#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	
	for (test_case = 1; test_case <= 10; ++test_case){
		int tc;
		cin >> tc;

		int grid[100][100];
		for (int i = 0; i < 100; i++)
			for (int j = 0; j < 100; j++)
				cin >> grid[i][j];

		int answer = 0, sum = 0;
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++)
				sum += grid[i][j];
			if (sum > answer)
				answer = sum;
			sum = 0;
		}

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++)
				sum += grid[j][i];
			if (sum > answer)
				answer = sum;
			sum = 0;
		}

		for (int i = 0, j = 0; i < 100; i++, j++) {
			sum += grid[i][j];
		}
		if (sum > answer)
			answer = sum;
		sum = 0;
		
		for (int i = 99, j = 99; i >= 0; i--, j--)
			sum += grid[i][j];
		if (sum > answer)
			answer = sum;

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}