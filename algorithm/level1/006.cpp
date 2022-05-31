//2016년
//https://programmers.co.kr/learn/courses/30/lessons/12901?language=cpp

#include <string>
#include <vector>
// #include <iostream>
using namespace std;

string solution(int a, int b) {
    const string answer[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    const int months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int days=b;
    for(int i=0; i<a-1; ++i)
    {
        days += months[i];
    }        
    return answer[days % 7];
}

// int main()
// {
//     cout << solution(5, 24) << '\n';
//     return 0;
// }