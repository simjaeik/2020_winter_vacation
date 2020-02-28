#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		vector<int> num;
		for (int i = 0; i < 10; i++) {
			int n, sum(0);
			cin >> n;

			while (n != 0) {
				sum += n % 10;
				n /= 10;
			}
			num.push_back(sum);
		}
		int max = *max_element(num.begin(), num.end());
		int min = *min_element(num.begin(), num.end());

		cout << "#" << test_case << " " << max << " " << min << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

#include<iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string answer = "";
		for (int i = 0; i < 3; i++){
			string tmp;
			cin >> tmp;
			transform(tmp.begin(), tmp.end(), tmp.begin(), ::toupper);

			answer += tmp[0];
		}


		cout << "#" << test_case << " " <<answer << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

