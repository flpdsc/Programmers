#include <string>
#include <vector>

using namespace std;
int answer = 0;

void DFS(vector<int> num, int tar, int sum, int lvl)
{
    if(lvl==num.size()){
        if(tar==sum) answer++;
    }
    else{
        DFS(num, tar, sum+num[lvl], lvl+1);
        DFS(num, tar, sum-num[lvl], lvl+1);
    }
}

int solution(vector<int> numbers, int target) {
    DFS(numbers, target, 0, 0);
    return answer;
}