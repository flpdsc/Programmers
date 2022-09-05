#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

vector<int> solution(int n, vector<string> words)
{
    vector<int> answer(2, 0);
    unordered_map<string, bool> check;

    int who=0, turn=1;
    char last=words[0].front();

    for(int i=0; i<words.size(); ++i){
        if(last!=words[i].front() || check[words[i]]){
            answer[0] = who+1;
            answer[1] = turn;
            break;
        }
        check[words[i]] = true;
        last = words[i].back();
        who = (who+1)%n;
        if(who==0) ++turn;
    }    
    return answer;
}

int main()
{
    int smp_n[] = {3, 5, 2};
    vector<vector<string> > smp_w = {
        {"tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank"},
        {"hello", "observe", "effect", "take", "either", "recognize", "encourage", "ensure", "establish", "hang", "gather", "refer", "reference", "estimate", "executive"},
        {"hello", "one", "even", "never", "now", "world", "draw"}
    };

    for(int i=0; i<3; ++i){
        vector<int> ans = solution(smp_n[i], smp_w[i]);
        cout << ans[0] << ',' << ans[1] << '\n';
    }
    return 0;
}