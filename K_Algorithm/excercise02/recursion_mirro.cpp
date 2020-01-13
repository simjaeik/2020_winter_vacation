#include <iostream>
#include <vector>

#define IS_PATH 0
#define IS_WALL 1
#define ALREADY_PASSED 2
#define IS_ROUTE 3

std::vector<std::vector<int>> set_mirro(int N);
int get_track(std::vector<std::vector<int>> mirro, int x, int y);

int T, N;
int main() {
	
	std::cin >> T;

	while (T--) {
		std::cin >> N;

		std::vector<std::vector<int>> mirro = set_mirro(N);

		std::cout << get_track(mirro, 0, 0) << std::endl;

	}

} 

std::vector<std::vector<int>> set_mirro(int N) {
	int n;
	std::vector<std::vector<int>> mirro;

	for (int i = 0; i < N; i++) {
		std::vector<int> tmp;

		for (int j = 0; j < N; j++) {
			std::cin >> n;
			tmp.push_back(n);
		}
		mirro.push_back(tmp);
	}

	return mirro;
}

int get_track(std::vector<std::vector<int>> mirro, int x, int y) {

	if (x < 0 || y < 0 || x >= N || y >= N)
		return 0;
	else if (mirro[x][y] != IS_PATH)
		return 0;
	else if (x == N - 1 && y == N - 1)
		return 1;
	else {
		mirro[x][y] = ALREADY_PASSED;
		return get_track(mirro, x, y + 1) + get_track(mirro, x + 1, y) + get_track(mirro, x, y - 1) + get_track(mirro, x - 1, y);
		mirro[x][y] = IS_PATH;
	}

}