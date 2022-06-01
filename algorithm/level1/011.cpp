//N개의 최소공배수
//https://programmers.co.kr/learn/courses/30/lessons/12953?language=cpp

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    sort(arr.begin(), arr.end(), greater<>());
    int answer = arr[0];
    while(1)
    {
        int flag = true;
        for(int i=0; i<arr.size(); ++i)
        {
            if(answer%arr[i]!=0)
            {
                flag = false;
                break;
            }
        }
        if(!flag) answer += arr[0];
        else break;
    }
    return answer;
}