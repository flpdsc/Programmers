//프린터 https://school.programmers.co.kr/learn/courses/30/lessons/42587?language=cpp

#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int priority[10] = {0, };
    int cnt = 0;
    queue<pair<int, int> > q;
    for(int i=0; i<priorities.size(); ++i)
    {
        q.push(make_pair(priorities[i], i));
        ++priority[priorities[i]];
    }
    
    while(!q.empty())
    {
        bool flag = false;
        for(int i=q.front().first+1; i<10; ++i)
        {
            if(priority[i]>0)
            {
                flag = true;
                q.push(q.front()); 
                break;
            }
        }
        if(!flag)
        {
            --priority[q.front().first];
            ++cnt;
            if(q.front().second==location)
            {
                return cnt;
            }
        }
        q.pop();
    }   
    return -1;
}

// int main()
// {
//     cout << solution({2, 1, 3, 2}, 2) << '\n';
//     cout << solution({1, 1, 9, 1, 1, 1}, 0) << '\n';
//     return 0;
// }
