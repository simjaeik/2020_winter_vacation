/////////////////////////////////////////////////////////////////////////////////////////////
// �⺻ �����ڵ�� ���� �����ص� ���� �����ϴ�. ��, ����� ���� ����
// �Ʒ� ǥ�� ����� ���� �ʿ�� �����ϼ���.
// ǥ�� �Է� ����
// int a;
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){

		int N, ans(0);
		cin >> N;

		for (int i = 1; i <= N; i++) {

			int sum = 0;
			int num = i;
			while (sum < N) {
				sum += num++;
				if (sum == N) ans++;
			}

		}
		
		cout << "#" << test_case << " " << ans << endl;

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}