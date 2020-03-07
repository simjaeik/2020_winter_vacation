#include<iostream>
#include <algorithm>
#include <string>

using namespace std;
int answer = 0,chance, flag=0;
string num, cmp, max_num;

int done = 0;
void dfs(string now, int chn) {
	if (done == 1)return;
	if (now == max_num && (chance - chn) % 2 == 0) {
		cmp = now;
		done = 1;
		return;
	}
	else if (now == max_num && (chance - chn) % 2 == 1 && flag == 0) {
		flag++;
		dfs(now, chance - 1);
		done = 1;
		return;
	}

	if (chn >= chance) {
		if (cmp < now)
			cmp = now;
		return;
	}
	else {
		for (int i = 0; i < num.length(); i++) {
			for (int j = 0; j < i; j++) {
				char tmp = now[i];
				now[i] = now[j];
				now[j] = tmp;

				dfs(now, chn + 1);
				tmp = now[i];
				now[i] = now[j];
				now[j] = tmp;
			}

			for (int j = i+1; j < num.size(); j++) {
				char tmp = now[i];
				now[i] = now[j];
				now[j] = tmp;

				dfs(now, chn + 1);
				tmp = now[i];
				now[i] = now[j];
				now[j] = tmp;
			}
		}
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){

		cin >> num >> chance;

		max_num = num;
		sort(max_num.rbegin(), max_num.rend());
		cmp = "";

		dfs(num, 0);

		cout << "#" << test_case << " " << stoi(cmp) << endl;
		done = 0, flag=0;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}