#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	string str = "hellooo";

	auto n = str.find("lo");
	
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){
		
		int N;
		string input="",ans;
		cin >> N;

		for (int i = 0; i < N; i++){
			char tmp;
			cin >> tmp;
			input += tmp;
		}

		ans = "0";
		while ( input.find(ans) != input.npos ) {
			long long num = stoll(ans);
			num++;
			ans = to_string(num);
		}

		cout << "#" << test_case << " " << ans << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}