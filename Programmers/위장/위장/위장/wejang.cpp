#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;
//
//int solution(int cacheSize, vector<string> cities) {
//	int answer = 0;
//	map<string, int> cache;
//
//	if (cacheSize == 0)
//		return cities.size();
//
//	for (auto a : cities) {
//		transform(a.begin(), a.end(), a.begin(), (int(*)(int)) tolower);
//
//		if (cache[a] <= 0) {
//			cache[a] = 0;
//			answer += 5;
//		}
//		else if (cache[a] > 0) {
//			cache[a] = 0;
//			answer += 1;
//		}
//
//		for (auto b : cache) {
//			cache[b.first]++;
//			if (cache[b.first] > cacheSize) {
//				cache.erase(b.first);
//			}
//		}
//	}
//
//	return answer;
//}


using namespace std;

int solution(int cacheSize, vector<string> cities) {
	int answer = 0;
	vector<string> cache;

	for (auto city : cities) {
		transform(city.begin(), city.end(), city.begin(), (int(*)(int))tolower );

		vector<string>::iterator itr = find(cache.begin(), cache.end(), city);
		if (itr == cache.end()) {
			cache.push_back(city);
			answer += 5;
		}
		else {
			cache.erase(itr, itr);
		}

	}


	return answer;
}

int main() {
	vector<string> b = { "JeaSFu", "JeaSFu", "JeaSFu", "JeaSF1u", "JeaSFu", "JeaSFu" };
	vector<string>::iterator itr = find(b.begin(), b.end(), "JeaSF1u");

	b.erase(itr, itr+1);

<<<<<<< HEAD
	for (auto a : b)
		cout << a << endl;

	//cout<<solution(1, b);
}
=======
	cout << a.find("-");
}
// incomplete
>>>>>>> adbd4089d2599f53cf701949d0c8e8769674bec4
