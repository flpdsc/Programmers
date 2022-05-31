//로또의 최고 순위와 최저 순위 
//https://programmers.co.kr/learn/courses/30/lessons/77484?language=cpp

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer(2);

    int noNumCnt = 0; //알아볼 수 없는 수(0) 갯수
    int matchNumCnt = 0; //매칭 갯수

    for(int i=0; i<lottos.size(); ++i)
    {
        if(lottos[i]==0)
        {
            noNumCnt++;
            continue;
        }
        for(int j=0; j<win_nums.size(); ++j)
        {
            if(lottos[i] == win_nums[j])
            {
                matchNumCnt++;
                break;
            }
        }
    }

    int rank[7] = {6,6,5,4,3,2,1};
    answer[0] = rank[matchNumCnt+noNumCnt]; //최고순위
    answer[1] = rank[matchNumCnt]; //최저순위

    return answer;
}