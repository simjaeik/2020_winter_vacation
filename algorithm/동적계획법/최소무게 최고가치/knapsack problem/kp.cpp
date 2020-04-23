#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<pair<int, int>> bag;
int ans = 0;

void dfs(int vsum, int wsum, int cnt, int prev) {

	if (wsum > 11) {
		wsum -= bag[prev].second;
		vsum -= bag[prev].first;
		if (vsum > ans)
			ans = vsum;
	}

	if (cnt >= 5) {
		if (vsum > ans)
			ans = vsum;
		return;
	}
	
	dfs(vsum, wsum, cnt + 1, cnt);
	dfs(vsum + bag[cnt].first, wsum + bag[cnt].second, cnt + 1, cnt);

}

int main() {


	bag.push_back(make_pair(1, 1));
	bag.push_back(make_pair(18, 5));
	bag.push_back(make_pair(22, 6));
	bag.push_back(make_pair(28, 7));
	bag.push_back(make_pair(6, 2));

	dfs(0, 0, 0, 0);

	cout << ans;
}