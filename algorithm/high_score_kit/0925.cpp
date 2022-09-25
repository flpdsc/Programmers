//H-Index https://school.programmers.co.kr/learn/courses/30/lessons/42747?language=cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<>());
    
    for(int i=0; i<citations.size(); ++i)
    {
        if(citations[i]<i+1) break;
        int j;
        for(j=i+1; j<citations.size(); ++j)
        {
            if(citations[j]>i+1)
            {
                break;
            }
        }
        if(j==citations.size())
        {
            answer = i+1;
        }   
    }

    return answer;
}

int main()
{
    cout << solution({3, 0, 6, 1, 5}) << '\n';
    return 0;
}