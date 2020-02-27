#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){

		int city, range, n, boom=0, answer=0;
		cin >> city >> range>>n;
		range--;
		vector<int> cities(city,0);

		if (n == 1) {
			for (int j = 0; j <= range; j++) {
				if (j < 0 || j > city)continue;
				cities[j]++;
			}
			cities[0] = 2;
		}

		for (int i = 1; i < city-1; i++){
			cin >> n;
			if (n == 1) {
				for (int j = i - range; j <= i + range; j++) {
					if (j < 0 || j > city)continue;
					cities[j]++;
				}
				cities[i] = 2;
			}
		}

		cin >> n;
		if (n == 1) {
			for (int j = city - 1 - range; j < city; j++) {
				if (j < 0)continue;
				cities[j]++;
			}
			cities[city-1] = 2;
		}

		for (int i = 0; i < city-1; i++){
			if (cities[i] < 2) {
				for (int j = i + range; j >= i; j--) {
					if (j >= city) continue;
					else if (cities[j] < 2) {
						for (int k = i; k <= i + range; k++) {
							if ( k >= city)continue;
							cities[k]++;
						}
						i = j - 1;
						cities[j] = 2;
						answer++;
						break;
					}
				}
			}
		}

		if (cities[city-1] < 2) {
			cities[city-1] = 2;
			answer++;
		}

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}