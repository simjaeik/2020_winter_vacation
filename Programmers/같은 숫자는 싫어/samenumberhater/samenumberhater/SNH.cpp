#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    
    int n = arr[0];
    answer.push_back(n);
    for (int a : arr) {
        if (n == a)
            continue;
        answer.push_back(a);
        n = a;
    }

    return answer;
}
