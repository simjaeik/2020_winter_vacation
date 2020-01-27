#include <iostream>
#include <vector>
#include <string>

std::string solution(int a, int b) {
    std::string answer = "";
    std::vector < std::string > day = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
    std::vector < int > month = { 31,29,31,30,31,30,31,31,30,31,30,31 };

    int count = 0;

    for (int i = 0; i < a-1; i ++) 
        count += month[i];    
    count += b + 4;

    return day[ count%7 ];
}

int main() {

    std::cout << solution(5, 24);

}