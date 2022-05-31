//완주하지 못한 선수(해시)
//https://programmers.co.kr/learn/courses/30/lessons/42576?language=cpp

#include <string>
#include <vector>
#include <map>
// #include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    map<string, int> map;

    for(string c : completion)
    {
        map[c]++;
    }

    for(string p : participant)
    {
        map[p]--;
        if(map[p]<0)
        {
            answer = p;
            break;
        }
    }

    return answer;
}

// int main()
// {
//     vector<string> participant[3] = {{"leo", "kiki", "eden"}, {"marina", "josipa", "nikola", "vinko", "filipa"}, {"mislav", "stanko", "mislav", "ana"}};
//     vector<string> completion[3] = {{"eden", "kiki"}, {"josipa", "filipa", "marina", "nikola"}, {"stanko", "ana", "mislav"}};
//     vector<string> answer;
    
//     for(int i=0; i<3; ++i)
//     {
//         answer.push_back(solution(participant[i], completion[i]));
//         cout << answer[i] << '\n';
//     }
//     return 0;
// }