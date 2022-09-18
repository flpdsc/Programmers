//두 정수 사이의 합
//https://school.programmers.co.kr/learn/courses/30/lessons/12912?language=cpp

#include <string>
#include <vector>
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a>b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i=a; i<=b; ++i)
    {
        answer += (long long)i;
    }
    return answer;
}