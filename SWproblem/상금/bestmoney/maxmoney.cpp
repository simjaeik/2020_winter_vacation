#include<iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case){

		string num;
		int chance;
		cin >> num >> chance;

		while (chance--) {
			
			for (int i = 0; i < num.length() - 1; i++) {
				char point = num[i];
				auto max = max_element(num.rbegin() + i, num.rend());
				if (num[i] < *max ) {
					auto tmp = num[i];
					num[i] = *max;
					*max = tmp;
					break;
				}
				if (i == num.length() - 2) {
					auto tmp = num[i];
					num[i] = num[i + 1];
					num[i + 1] = tmp;
				}
			}
		}

		cout << "#" << test_case << " " << num << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}