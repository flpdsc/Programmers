//다리를 지나는 트럭 https://school.programmers.co.kr/learn/courses/30/lessons/42583?language=cpp
#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    int answer=0, p=0, sum=0;
    queue<int> q;

    while(1)
    {
        if(p==truck_weights.size())
        {
            answer += bridge_length;
            break;
        }

        if(q.size()==bridge_length)
        {
            sum -= q.front();
            q.pop();
        }
        
        if(sum+truck_weights[p]<=weight)
        {
            sum += truck_weights[p];
            q.push(truck_weights[p++]);
        }
        else
        {
            q.push(0);
        }
        ++answer;
    }

    return answer;
}

int main()
{
    cout << solution(2, 10, {7, 4, 5,6}) << '\n'; //8
    cout << solution(100, 100, {10}) << '\n'; //101
    cout << solution(100, 100, {10,10,10,10,10,10,10,10,10,10}) << '\n'; //110
}