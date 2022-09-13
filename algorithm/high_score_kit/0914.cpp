//위장(해시) https://school.programmers.co.kr/learn/courses/30/lessons/42578?language=cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> um;

    for(int i=0; i<clothes.size(); ++i)
    {
        um[clothes[i][1]]++;
    }


    for(auto it=um.begin(); it!=um.end(); ++it)
    {
        answer *= (it->second)+1;
    }

    return answer-1;
}

// int main()
// {
//     vector<vector<string>> clothes[2] = {{{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}}, 
//                                          {{"crow_mask", "face"}, {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}}};
//     for(int i=0; i<2; ++i)
//     {
//         cout << solution(clothes[i]) << '\n';
//     }
//     return 0;
// }