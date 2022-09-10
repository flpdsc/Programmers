#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0;
    priority_queue<int> pq;
    for(int i=0; i<scoville.size(); ++i)
    {
        pq.push(-scoville[i]);
    }

    while(-pq.top()<K)
    {
        if(pq.size()==1) return -1;
        int tmp = pq.top();
        pq.pop();
        tmp += pq.top()*2;
        pq.pop();
        pq.push(tmp);
        answer++;
    }
    return answer;
}

int main()
{
    vector<int> s = {1, 2, 3, 9, 10, 12};
    cout << solution(s, 7) << '\n';
    return 0;
}