#include <iostream>
#include <vector>

using namespace std;

int main() {

	int T;
	cin>>T;



	for (int Tc = 1; Tc <= T; Tc++){
		vector<int> clock(2);

		int a, b, c, d;
		cin >> a >> b >> c >> d;

		clock[1] = (b + d) % 60;
		clock[0] = (a + c + (b + d) / 60) % 12;

		cout << "#" << Tc << " " << clock[0] << " " << clock[1]<<endl;

	}


}