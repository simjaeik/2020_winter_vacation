#include<iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;
map<char,int> chk;
set<string> ans;
int answer = 0, N;
vector<string> word;
vector<bool> visited;

void dfs(int n, string tmp) {
	

		if (chk.size() == 26) {
			ans.insert(tmp);
			cout << tmp << endl;
		}
		if (n >= N)
			return;

	for (int i = n; i < N; i++) {
		for (int j = 0; j < word[i].length(); j++)
			chk[word[i][j]]++;
		dfs(i+1, tmp+word[i]);
		for (int j = 0; j < word[i].length(); j++) {
			chk[word[i][j]]--;
			if (chk[word[i][j]] <= 0)
				chk.erase(word[i][j]);
		}
	}
}


int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){
		cin >> N;

		word.clear();
		chk.clear();
		visited.clear();
		ans.clear();

		for (int i = 0; i < N; i++) {
			string a;
			cin >> a;
			word.push_back(a);
		}

		dfs(0, "");

		cout << "#" << test_case << " " << ans.size() << endl;
		answer = 0;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}