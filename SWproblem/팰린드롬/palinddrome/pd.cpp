#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int T;
	cin >> T;

	for (int Tc = 1; Tc <= T; Tc++)
	{
		int y_n=0;
		string input;
		cin >> input;

		string un_reverse = input;
		reverse(input.begin(), input.end());

		if (input.compare(un_reverse)==0) y_n = 1;
	
		cout << "#" << Tc << " " << y_n << endl;
	}


}