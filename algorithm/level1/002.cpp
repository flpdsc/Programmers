//K번째수 (정렬)
//https://programmers.co.kr/learn/courses/30/lessons/42748?language=cpp

#include <string>
#include <vector>
#include <algorithm>
// #include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(int i=0; i<commands.size(); ++i)
    {
        int start = commands[i][0]-1;
        int end = commands[i][1]-1;
        int arr_size = end-start+1;
        
        int arr[arr_size];
        for(int j=start; j<=end; ++j)
        {
            arr[j-start] = array[j];
        }
        sort(arr, arr+arr_size);
        answer.push_back(arr[commands[i][2]-1]);
    }
    return answer;
}

// int main()
// {
//     vector<int> res = solution({1, 5, 2, 6, 3, 7, 4}, {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}});
//     for(int i=0; i<res.size(); ++i)
//     {
//         cout << res[i] << ' ';
//     }
// }