#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){
		string str, ans("Exist");
		cin >> str;

		while(str.length()>1){
			if (str[0] == '*' || str[str.length() - 1] == '*')
				break;
			else if (str[0] == str[str.length()- 1]) {
				str.erase(str.begin());
				str.erase(str.end()-1);
			}
			else {
				ans = "Not exist";
				break;
			}
		}

		cout << "#" << test_case << " " << ans << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}