//입국심사(이분탐색) https://school.programmers.co.kr/learn/courses/30/lessons/43238?language=cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    sort(times.begin(), times.end());
    long long start = 1;
    long long end = (long long)times[times.size()-1]*n;

    while(start<=end)
    {
        long long mid = (start+end)/2;
        long long cnt=0;
        for(int i=0; i<times.size(); ++i)
        {
            cnt += mid/(long long)times[i];
        }
        if(cnt>=n)
        {
            end = mid-1;
            answer = mid;
        }
        else
        {
            start = mid+1;            
        }
    }
    
    return answer;
}

// int main()
// {
//     cout << solution(6, {7,10}) << '\n';
//     return 0;
// }