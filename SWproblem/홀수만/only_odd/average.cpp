#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int T;
	cin >> T;

	for (int tc = 0; tc < T; tc++)
	{
		int num, sum = 0;
		for (int i = 0; i < 10; i++)
		{
			cin >> num;
			sum += num;
		}

		cout << "#" << tc + 1 << " " << floor((double)sum/10+0.5) << endl;
	}

}