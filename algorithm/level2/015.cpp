//귤 고르기 https://school.programmers.co.kr/learn/courses/30/lessons/138476
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int n = tangerine.size();

    vector<int> v(10000001, 0);

    for(int i=0; i<n; ++i) ++v[tangerine[i]];

    sort(v.begin(), v.end(), greater<>());

    while(k>0) k -= v[answer++];        

    return answer;
}

int main()
{
    cout << solution(6, {1, 3, 2, 5, 4, 5, 2, 3}) << '\n'; //3
    cout << solution(4, {1, 3, 2, 5, 4, 5, 2, 3}) << '\n'; //2
    cout << solution(2, {1, 1, 1, 1, 2, 2, 2, 3}) << '\n'; //1
    return 0;
}