//다리를 지나는 트럭 https://school.programmers.co.kr/learn/courses/30/lessons/42583?language=cpp
#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    
    queue<int> onBridge;
    
    int p = 0;
    
    // while(1)
    // {

    // }
    return answer;
}

int main()
{
    cout << solution(2, 10, {7, 4, 5,6}) << '\n'; //8
    cout << solution(100, 100, {10}) << '\n'; //101
    cout << solution(100, 100, {10,10,10,10,10,10,10,10,10,10}) << '\n'; //110
}