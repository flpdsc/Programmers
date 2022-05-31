//모의고사(완전탐색)
//https://programmers.co.kr/learn/courses/30/lessons/42840?language=cpp

#include <string>
#include <vector>
// #include <iostream>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> score(3, 0);
    vector<int> sp[] = {{1, 2, 3, 4, 5}, {2, 1, 2, 3, 2, 4, 2, 5}, {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}}; 
    
    for(int i=0; i<answers.size(); ++i)
    {
        for(int j=0; j<3; ++j)
        {
            int idx = (i%sp[j].size());
            if(answers[i]==sp[j][idx])
            {
                score[j]++;
            }
        }
    }

    int maxScore=0;
    for(int i=0; i<3; ++i)
    {
        maxScore = max(maxScore, score[i]);
    }

    for(int i=0; i<3; ++i)
    {
        if(score[i]==maxScore)
        {
            answer.push_back(i+1);
        }
    }
    
    return answer;
}

// int main()
// {
//     vector<int> input[2] ={{1,2,3,4,5}, {1,3,2,4,2}};
//     vector<int> output[2];
//     for(int i=0; i<2; ++i)
//     {
//         output[i] = solution(input[i]);
//         for(int j=0; j<output[i].size(); ++j)
//         {
//             cout << output[i][j] << ' ';
//         }
//         cout << '\n';
//     }
//     return 0;
// }