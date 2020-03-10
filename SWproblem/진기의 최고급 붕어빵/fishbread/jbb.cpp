#include<iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){
		int N, M, K, stock(0);
		string answer = "Possible";
		cin >> N >> M >> K;

		vector<int> customer(N);

		for (int i = 0; i < N; i++)
			cin >> customer[i];

		sort(customer.begin(), customer.end());

		for (int i = 0; i < N; i++) {
			stock = (customer[i] / M) * K - i;
			if (stock < 1) {
				answer = "Impossible";
					break;
			}
		}

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;
}