//폰켓몬 (해시)
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    int poks = nums.size()/2; //데려갈 포켓몬 갯수

    //unordered_set<int> s(nums.begin(), nums.end());
    unordered_set<int> s;
    for(int i=0; i<nums.size(); ++i) s.insert(nums[i]);
    
    if(s.size()>=poks) return poks;
    else return s.size();
}

// int main()
// {
//     vector<int> nums[3] = {{3,1,2,3}, {3,3,3,2,2,4}, {3,3,3,2,2,2}};
//     vector<int> answer;
//     for(int i=0; i<3; ++i)
//     {
//         answer.push_back(solution(nums[i]));
//         cout << answer[i] << '\n';
//     }
//     return 0;
// }