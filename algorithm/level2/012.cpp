//점프와 순간 이동 https://school.programmers.co.kr/learn/courses/30/lessons/12980?language=cpp
#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    while(n>0)
    {
        if(n%2==0)
        {
            n /= 2;
        }
        else
        {
            --n;
            ++ans;
        }
    }
    return ans;
}

int main()
{
    cout << solution(5) << '\n'; //2
    cout << solution(6) << '\n'; //2
    cout << solution(5000) << '\n'; //5
    return 0;
}