//행렬의 곱셈 https://school.programmers.co.kr/learn/courses/30/lessons/12949
#include <vector>
#include <iostream>
using namespace std;

int ans[100][100];

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
        
    int r = arr2[0].size();
    int c = arr1.size();
    
    vector<vector<int>> answer(c, vector<int>(r));
    
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            for(int k=0; k<arr2.size(); ++k)
            {
                answer[j][i] += (arr1[j][k]*arr2[k][i]);
            }
        }
    }    
    return answer;
}