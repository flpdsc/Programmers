//주식가격 https://school.programmers.co.kr/learn/courses/30/lessons/42584?language=cpp
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for(int i=0; i<prices.size(); ++i)
    {
        int res = 0;
        for(int j=i+1; j<prices.size(); ++j)
        {
            ++res;
            if(prices[i]>prices[j])
            {
                break;
            }
        }
        answer.push_back(res);
    }
    return answer;
}

// int main()
// {
//     vector<int> ans = solution({1,2,3,2,3});
//     for(auto it : ans)
//     {
//         cout <<  it << '\n';
//     }
//     return 0;
// }