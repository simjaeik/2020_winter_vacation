#include<iostream>
#include <vector>

using namespace std;
vector<int> jang;

int N, B, ans(-1);

void get_top(int sum, int cnt) {

	if (ans != -1 && sum - B >= ans)
		return;

	if (sum >= B) {
		if (ans == -1)
			ans = sum - B;
		else if(sum-B<ans)
			ans = sum - B;
		return;
	}
	if (cnt >= jang.size()) 
		return;

	get_top(sum + jang[cnt], cnt + 1);
	get_top(sum, cnt + 1);

}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){
		cin >> N >> B;

		jang.assign(N,0);

		for (int i = 0; i < N; i++)
			cin >> jang[i];

		get_top(jang[0], 1);
		get_top(0, 1);

		cout << "#" << test_case << " " << ans << endl;
		ans = -1;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}