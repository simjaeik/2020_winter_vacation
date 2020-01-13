#include <iostream>
#include <fstream>
#include <string>

void set_output(int num);

int main() {
	int N;
	
	std::ifstream inFile("input2.txt");
	inFile >> N;

	std::cout << N;

	while (N--) {
		int word_len, len, num;
		inFile >> word_len;
		inFile >> len;
		inFile >> num;

		set_output(num);


	}

}

void set_output(int num) {

	std::ofstream outFile("output2.txt");

}