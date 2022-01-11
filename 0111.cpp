#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int idx = 0;
    while(idx<progresses.size()){
        int cnt=0;
        if(progresses[idx]<100){
            for(int i=idx; i<progresses.size(); ++i){
                if(progresses[i]<100) progresses[i] += speeds[i];
            }
        }
        else{
            for(int i=idx; i<progresses.size(); ++i){
                if(progresses[i]<100) break;
                else cnt++;
            }
        }
        if(cnt>0){
            answer.push_back(cnt);
            idx += cnt;
        }
    }
    return answer;
}