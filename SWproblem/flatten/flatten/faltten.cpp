#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int answer;
vector<int> box;

int do_dump() {
	auto b_max = max_element(box.begin(), box.end());
	auto b_min = min_element(box.begin(), box.end());

	answer = *b_max - *b_min;
	if (answer <= 1) return answer;

	*b_max -= 1;
	*b_min += 1;

	b_max = max_element(box.begin(), box.end());
	b_min = min_element(box.begin(), box.end());

	return *b_max - *b_min;
}

int main(int argc, char** argv)
{
	int test_case;

	for (test_case = 1; test_case <= 10; ++test_case){
		int N;
		cin >> N;
		box.assign(100, 0);
		int answer;

		for (int i = 0; i < 100; i++)
			cin >> box[i];
		
		while (N--) {
			answer = do_dump();
			if (answer <= 1)
				break;
		}

		cout << "#" << test_case << " " << answer << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}