#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){
		int N;
		cin >> N;
		int answer = 0;
		set<char> title;
		
		for (int i = 0; i < N; i++) {
			string tmp;
			cin >> tmp;
			title.insert(tmp[0]);
		}
		
		for (int i = 0; i < title.size(); i++) {
			if (title.find('A'+i) == title.end())
				break;
			answer++;
		}

		cout << "#" << test_case << " " << answer << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}