//체육복(Greedy)
//https://programmers.co.kr/learn/courses/30/lessons/42862?language=cpp

#include <string>
#include <vector>
// #include <iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> check(32,1);

    for(int i=0; i<reserve.size(); ++i)
    {
        check[reserve[i]]++;
    }

    for(int i=0; i<lost.size(); ++i)
    {
        check[lost[i]]--;
    }

    for(int i=1; i<=n; ++i)
    {
        if(check[i]==2 && check[i-1]==0)
        {
            check[i-1]++;
            check[i]--;
        }
        else if(check[i]==2 && check[i+1]==0)
        {
            check[i+1]++;
            check[i]--;
        }
    }

    for(int i=1; i<=n; ++i)
    {
        if(check[i]>0) answer++;
    }
    return answer;
}

// int main()
// {
//     int n[] = {5, 5, 3};
//     vector<int> lost[] = {{2,4},{2,4},{3}};
//     vector<int> reserve[] = {{1,3,5},{3},{1}};

//     for(int i=0; i<3; ++i)
//     {
//         cout << solution(n[i], lost[i], reserve[i]) << '\n';
//     }
//     return 0;
// }