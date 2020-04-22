#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string a, b;
	cin >> a >> b;

	int dp[1001][1001] = { 0 };
	
	for (int i = 0; i < a.length(); i++){
		for (int j = 0; j < b.length(); j++) {
			if (a[i] == b[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout << dp[a.length()][b.length()];
}