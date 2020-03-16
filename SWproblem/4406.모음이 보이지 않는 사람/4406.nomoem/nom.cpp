#include<iostream>
#include <string>

using namespace std;

char moem[5] = { 'a','e','i','o','u' };
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){
		string tmp;
		cin >> tmp;

		for (auto i = tmp.begin(); i != tmp.end();){
			int chk = 0;
			for (int j = 0; j < 5; j++) {
				if (*i == moem[j]) {
					i = tmp.erase(i);
					chk = 1;
				}
			}
			if (chk == 0)i++;
		}

		cout <<"#"<<test_case<<" "<< tmp << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}