#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

bool is_duplicated(std::string str);
void get_return(std::vector<std::string>& arr, std::vector<bool> visited, int start, int n, int r);
int solution(std::vector<std::string>& A);

int max = 0;
int solution(std::vector<std::string>& A) {

	for (int i = 0; i < A.size(); i++) 
		if (is_duplicated(A.back()))
			A.pop_back();
	
	if (A.empty())
		return 0;

	for (int i = 0; i < A.size(); i++) {
		
		std::vector<bool> boolean;
		for (int j = 0; j < A.size(); j++)
			boolean.push_back(true);

		get_return(A, boolean, 0, A.size(), i);
	}

	std::cout << max;
}

void get_return(std::vector<std::string>& arr, std::vector<bool> visited, int start, int n, int r) {
	if (r == 0) {
		std::string sum;
		for (int i = 0; i < n; i++) {
			if (visited[i] == true) 
				sum += "" +arr[i];
		}
		std::cout << sum << std::endl;

		if (is_duplicated(sum)) {
			return;
		} 

		if (max < sum.length()) {
			max = sum.length();
		std::cout << sum << std::endl;
		}
		return ;
	}
	else {
		for (int i = start; i < n; i++) {
			visited[i] = true;
			get_return(arr, visited, i + 1, n, r - 1);
			visited[i] = false;
		}
	}
}


bool is_duplicated(std::string str) {
	std::unordered_set<char> set;

	for (int i = 0; i < str.length(); i++) {
		if (set.find(str[i]) != set.end())
			return true;
		set.insert(str[i]);
	}
	return false;
}

int main() {
	std::vector<std::string> a = { "eva","jqw","tyn" ,"jan"};

	solution(a);
}