#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> nums;
	vector<int> data;

	ifstream readFile;
	readFile.open("data.txt");
	if (readFile.is_open()) {
		string N;
		getline(readFile, N);
		while (!readFile.eof()) {
			string num;
			getline(readFile, num);
			if (num != "")
				nums.push_back(stoi(num));
		}
	}

	for (int i = 0; i < nums.size() - 3; i += 3)
		data.push_back(*min_element(nums.begin() + i, nums.begin() + i + 3));

	int i=-1, j=-1;
	while (i + j != 0) {
		cin >> i >> j;

		i /= 3;
		j /= 3;

		cout << "data : " << *min_element(data.begin() + i, data.begin() + j+1) << endl;
	}
}